# Sony ee-gcc 2.9 (2.9-ee-991111): GT3 matching guidance

This is the **default** compiler for Gran Turismo 3: A-Spec (SCUS-97102 v1.00), as configured by `project.toml [compiler]`. GT4 uses a later ee-gcc 2.96 compiler. Do **not** treat GT4's `knowledge/ee-gcc-2.96.md` as compiler-independent instructions.

## Confirmed GT3-specific facts

- The original executable has 16-byte spacing between saved callee registers in many function prologues (see `knowledge/gt3.md`). In GT3 this is the normal compiler signature, **not** a reason to classify the function as a separate SDK compiler.
- The project default is `ee-gcc2.9-991111`, `-O2 -G0 -fno-exceptions`, with `-Iinclude`. Read the exact compiler command from `project.toml`; do not guess from GT4's settings.
- The executable uses small data via `$gp` for some globals. The dedicated `ee-gcc2.9-991111-gp` profile uses `-G8`. Do **not** globally switch to `-G8`: existing matches require per-source selection.
- GT3's `[cpu] sdk_compiler_split = false` deliberately prevents the GT4-specific 16-byte prologue heuristic from discarding GT3 functions.
- Shared GT4 sources may provide structural hints, but must be compiled and judged against GT3 with its own compiler.

## Rules for agents and automatic prompts

1. Start from the target's assembly and the judge's instruction-level diff. Prefer evidence from **GT3** matching sources and `knowledge/gt3.md`.
2. Use the compiler named by `project.toml` or a source's explicit `/* compiler: NAME */` marker. The marker must correspond to a profile defined in the project.
3. Treat ee-gcc 2.96 register allocation, branch-likely scheduling, stack layout, and instruction-order advice as **unverified hypotheses** for GT3, not defaults. Validate each candidate by compiling with 2.9 and running `tools/match.py check`.
4. Do not claim that every branch-likely instruction, stack frame, or register choice is determined solely by compiler version; source code and flags also matter.
5. Record failed hypotheses and near misses in the attempts diary; do not repeatedly try 2.96-specific transformations without evidence.

## Validation

- `python tools/match.py check ADDR src/path.cpp` judges the specific function.
- `python tools/build.py --keep-going --jobs 2` checks the complete executable reproduction.
- The model's compiler identity is assembled by `tools/autoloop.py` from `project.CONFIG["compiler"]["name"]`; the `[model].knowledge` list controls additional prompt guidance.

This file is a **conservative baseline**, not an exhaustive reverse-engineered ee-gcc 2.9 idiom catalog. Expand it only with reproducible compiler probes or instruction-level GT3 matches.
