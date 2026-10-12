# Gran Turismo 3: A-Spec: what is established

- `CORE.GT3` (NTSC-U SCUS-97102 v1.00) is raw-deflate compressed like `CORE.GT4`, not encrypted; one
  loaded section 0x00100000-0x003531e3 (code to 0x0028e760, data after), entry 0x00100008.
- 5,972 functions are reached by `jal` (2.44 MB image). Callee-saved registers are saved 16 bytes
  apart in almost every function (4,855 prologues against GT4's 8-byte spacing): the code was built
  by an ee-gcc 2.9 release (GT4 uses ee-gcc 2.9-991111 only for ~270 SDK functions).
- Shared code with Gran Turismo 4 (masked-body identity): 4.2% of the functions, 0.5% of the bytes —
  an older engine generation and compiler, so GT4's sources rarely carry over directly; the class
  names (RTTI strings) and the tools do.

## Small data ($gp)

- GT3 was built with small data (`-G8` style): a global of at most 8 bytes is read and written with one
  instruction relative to `$gp` (`lw $v0, -0x7f10($gp)`, `addiu $v0, $gp, off` for its address). 1,476 of
  the 11,407 functions do. The startup code sets `$gp = 0x003579F0` (`lui $a0,0x35; addiu $a0,$a0,0x79f0;
  daddu $gp,$a0,$zero` at 0x00100034-0x0010005c); the offsets reach 0x34F9F0-0x35F9EF (.sdata/.sbss).
- m2c does not know `$gp`, so drafts read the base as an unset register (`saved_reg_gp`, "does not
  compile"). `match.gp_rewrite` (called by `m2c_asm`) now writes every `off($gp)` as
  `%gp_rel(D_ADDR)($gp)` with ADDR = `$gp + off` (project.toml `[cpu] gp`), so m2c names the global and
  declares it `extern` with the width it was accessed with.
- Compile side: a gp source starts with `/* compiler: ee-gcc2.9-991111-gp */` (same compiler, `-G8`).
  Declare the globals `extern` with their real size (at most 8 bytes: gp-relative; an array of unknown
  size or a larger object: `lui` + absolute, which is what the original does for the rest of .bss/.data).
  Everything else stays `-G0`: with `-G8` as the default, 300 of 1,061 matched sources would break
  (they declare small scalars the original reaches by absolute address), so the profile is per source.
- Judge/link: `match.link_words` resolves `R_MIPS_GPREL16` as `S + A - gp`; `tools/build.py` adds
  `_gp = 0x003579f0;` to link.ld. Redraft: `region_compiler.py solve --compiler ee-gcc2.9-991111-gp --gp -j3`.
- Also fixed on the way: `include/types.h` and `m2c_macros.h` were missing (the drafts include them),
  the commands in project.toml lacked `-Iinclude` (build.py compiled every `#include "types.h"` source
  without it), and `autoloop.other_compiler` (16-byte register saves = Sony SDK) is off for GT3
  (`[cpu] sdk_compiler_split = false`): 16-byte spacing is the whole game here, so 3,297 functions had
  been skipped by cpu_solve/region_compiler.
