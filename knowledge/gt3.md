# Gran Turismo 3: A-Spec: what is established

- `CORE.GT3` (NTSC-U SCUS-97102 v1.00) is raw-deflate compressed like `CORE.GT4`, not encrypted; one
  loaded section 0x00100000-0x003531e3 (code to 0x0028e760, data after), entry 0x00100008.
- 5,972 functions are reached by `jal` (2.44 MB image). Callee-saved registers are saved 16 bytes
  apart in almost every function (4,855 prologues against GT4's 8-byte spacing): the code was built
  by an ee-gcc 2.9 release (GT4 uses ee-gcc 2.9-991111 only for ~270 SDK functions).
- Shared code with Gran Turismo 4 (masked-body identity): 4.2% of the functions, 0.5% of the bytes —
  an older engine generation and compiler, so GT4's sources rarely carry over directly; the class
  names (RTTI strings) and the tools do.
