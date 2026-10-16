"""Exercise the workflow compiler dispatch without downloading a PS2 toolchain."""
import ast
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import tomllib
import types
import unittest

ROOT = Path(__file__).resolve().parents[1]


class WorkflowCompilerTests(unittest.TestCase):
    def test_gt3_default_archive(self):
        config = tomllib.loads((ROOT / "project.toml").read_text())
        self.assertIn("ee-gcc2.9-991111", config["compiler"]["dir"])
        self.assertEqual(config["compiler"]["archive"],
                         config["compilers"]["ee-gcc2.9-991111"]["archive"])
        self.assertIn("-Iinclude", config["compiler"]["command"])

    def test_local_model_prompt_uses_project_config(self):
        tree = ast.parse((ROOT / "tools/local_llm.py").read_text())
        value = next(node.value for node in tree.body if isinstance(node, ast.Assign)
                     and any(isinstance(target, ast.Name) and target.id == "SYSTEM"
                             for target in node.targets))
        project = types.SimpleNamespace(
            CONFIG={"compiler": {"name": "configured compiler"}},
            compiler_command=lambda: "configured command")
        prompt = eval(compile(ast.Expression(value), "local_llm.SYSTEM", "eval"),
                      {"project": project})
        self.assertIn("configured compiler", prompt)
        self.assertIn("configured command", prompt)

    @unittest.skipUnless(shutil.which("bash"), "workflow runs under bash")
    def test_unmarked_default_and_explicit_profile(self):
        self.run_workflow(unknown=False)

    @unittest.skipUnless(shutil.which("bash"), "workflow runs under bash")
    def test_unknown_profile_fails(self):
        self.run_workflow(unknown=True)

    def run_workflow(self, unknown):
        workflow = (ROOT / ".github/workflows/check.yml").read_text()
        step = workflow.split("      - name: Every source compiles", 1)[1]
        step = step.split("      - name:", 1)[0].split("        run: |", 1)[1]
        script = "\n".join(line[10:] if line.startswith(" " * 10) else line
                           for line in step.splitlines())
        with tempfile.TemporaryDirectory(prefix="gt3-ci-dispatch-") as tmp:
            root = Path(tmp)
            (root / "tools").mkdir()
            (root / "src").mkdir()
            shutil.copyfile(ROOT / "tools/project.py", root / "tools/project.py")
            (root / "project.toml").write_text(
                '[game]\nbasename = "gt3"\n'
                '[compiler]\ndir = "/fake-default"\n'
                'command = "python3 fake.py default {dir}"\n'
                '[compilers."explicit-profile"]\ndir = "/fake-profile"\n'
                'command = "python3 fake.py profile {dir}"\n')
            (root / "fake.py").write_text(
                'import json,sys\nfrom pathlib import Path\n'
                'with open("calls.jsonl","a") as f: f.write(json.dumps(sys.argv[1:])+"\\n")\n'
                'Path(sys.argv[sys.argv.index("-o")+1]).touch()\n')
            marker = "missing-profile" if unknown else "explicit-profile"
            (root / "src/default.cpp").write_text("int default_source;\n")
            (root / "src/marked.cpp").write_text(
                "/* compiler: " + marker + " */\nint marked_source;\n")
            # Confine the workflow's temporary paths to this isolated fixture.
            script = script.replace("/tmp/", tmp + "/")
            (root / "sources.txt").write_text("src/default.cpp\nsrc/marked.cpp\n")
            (root / "compile.sh").write_text(script)
            env = os.environ.copy()
            env.pop("GT4_COMPILER_COMMAND", None)
            result = subprocess.run(["bash", "-e", "-o", "pipefail", "compile.sh"],
                                    cwd=root, env=env, capture_output=True, text=True)
            if unknown:
                self.assertNotEqual(result.returncode, 0, result.stdout + result.stderr)
            else:
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
                calls = [json.loads(line) for line in (root / "calls.jsonl").read_text().splitlines()]
                self.assertEqual([call[:2] for call in calls],
                                 [["default", "/fake-default"], ["profile", "/fake-profile"]])


if __name__ == "__main__":
    unittest.main()
