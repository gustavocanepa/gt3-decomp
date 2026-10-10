# Gran Turismo 3: A-Spec decompilation

[![Code](https://decomp.dev/gustavocanepa/gt3-decomp.svg?mode=shield&measure=code&label=Code)](https://decomp.dev/gustavocanepa/gt3-decomp)
[![Functions](https://decomp.dev/gustavocanepa/gt3-decomp.svg?mode=shield&measure=functions&label=Functions)](https://decomp.dev/gustavocanepa/gt3-decomp)

A work-in-progress matching decompilation of Polyphony Digital's Gran Turismo 3: A-Spec (PS2,
`CORE.GT3`, NTSC-U SCUS-97102 v1.00): C++ source that compiles, with the original compiler, to the exact same
instructions as the game. The long-term goal is a native port.

It is a sister project of the
[Gran Turismo 4 decompilation](https://github.com/gustavocanepa/gt4-decomp): same tools; GT3 is the previous engine generation, built with an older ee-gcc 2.9. Format documentation comes from the
[Gran Turismo Modding Hub](https://nenkai.github.io/gt-modding-hub/).

**This repository contains no game data.** You need your own copy of the game.

## Status

- The executable is understood (see [`knowledge/gt3.md`](knowledge/gt3.md)); 5,972 functions are reached by calls.
<!-- progress:start -->
- **Progress (October 2026, commit `bdca7f8bde53`): 2,200 of 11,407 functions match (19.3%), 2.8% of the code bytes.**
  The live numbers are on the `progress` branch (objdiff report format); this paragraph is written by
  `tools/update_readme.py` from `progress/report.json`, never by hand.
- **The full build reproduces the original executable** (both loaded segments, SHA-1 checked):
  2,200 functions, 2.8% of the code bytes, are linked from C/C++
  source at their original addresses, and the rest is assembled from splat's disassembly of your own
  executable. 0 of 2,245,743 data bytes (0.00%; `.data` plus `.bss`)
  are the constants of 0 functions, placed from source at their original addresses.
  0 functions that were hand-written assembly in the original are listed in
  [`config/asm_functions.txt`](config/asm_functions.txt) and not counted.
<!-- progress:end -->

## Credits

Started and maintained by **Gustavo Canepa** ([@gustavocanepa](https://github.com/gustavocanepa)),
with AI agents (Anthropic's Claude) doing the bulk of the matching. Thanks to Nenkai and the Gran
Turismo modding community, whose research made the file formats understandable.

If you use these tools or this work elsewhere, please credit this project (MIT, see [LICENSE](LICENSE)).

This license covers the tools, documentation and the source code written for this project.
Gran Turismo is a trademark of Sony Interactive Entertainment; this project is not affiliated
with or endorsed by Sony Interactive Entertainment or Polyphony Digital. It contains no game data,
and you need your own copy of the game to use it.

## Contributing

Help is welcome: matching functions, naming them, reconstructing structs and classes, or improving
the tools. Start with [CONTRIBUTING.md](CONTRIBUTING.md).

## Setup

Requirements: Python 3.11+ with `rabbitizer` (`pip install rabbitizer`), and Linux or WSL (Ubuntu).

1. Dump your disc and place the image as described in [`orig/README.md`](orig/README.md), then
   extract and convert the executable (commands there).
2. Set up the Linux side once: `bash tools/setup_linux.sh` (compiler, MIPS binutils, permuter).
3. Split the executable with splat (assembly for every function, under `build/splat/`):
   `bash tools/splat.sh` (in WSL/Linux).
4. Check that the full build reproduces your executable: `python tools/build.py`.
5. Build the function list and the duplicate groups:
   `python tools/find_functions.py orig/SCUS-97102/files/CORE.GT3 build/functions.csv` and
   `python tools/dedup.py scan`.

The tools and how to reuse them for another game are described in [TOOLS.md](TOOLS.md).

## Working on a function

```sh
python tools/match.py asm 100220                       # show the original
python tools/match.py check 100220 src/func_00100220.c # compile and compare
```

A function is done when `check` prints `MATCH` and `python tools/build.py` still reproduces the
original (it links every function at its real address and compares SHA-1).
