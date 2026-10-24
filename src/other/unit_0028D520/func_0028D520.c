#include "types.h"
s32 func_00286070(s32 a);
s32 func_0028D520(void) {
    u32 r = func_00286070(4) & 0x10000;
    return r != 0;
}
