# Original files

Nothing from the game is ever committed. Dump your own disc and put the image here:

```
orig/SCUS-97102/Gran Turismo 3 - A-Spec (USA) (v1.00).iso
```

Then extract the executable and convert it (decryption, decompression, ELF):

```sh
python tools/iso_extract.py "orig/SCUS-97102/Gran Turismo 3 - A-Spec (USA) (v1.00).iso" CORE.GT3 SYSTEM.CNF SCUS_971.02 -o orig/SCUS-97102/files
python tools/core2elf.py orig/SCUS-97102/files/CORE.GT3 orig/SCUS-97102/CORE.GT3.elf
```

`CORE.GT3` is raw-deflate compressed (no encryption); `core2elf.py` unpacks it.

## Expected hashes (SCUS-97102, version 1.00)

| File | SHA-1 |
|---|---|
| `SYSTEM.CNF` | `2de211162f91037e6a5900138a50cc58fd40491d` |
| `SCUS_971.02` (bootstrap) | `9ba003bddd9e03cae0440fd5f587f6201b25bd40` |
| `CORE.GT3` (as on disc) | `0a0de00c37679eae4ac20bd12b2c249df476359d` |
| `CORE.GT3.elf` (from `core2elf.py`) | `a1b8322d92095cd4f2f70e51bdbcb47639d3a3fc` |
