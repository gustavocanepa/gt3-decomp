/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00234020();                                /* extern */
s32 func_002392A8(M2C_UNK *, s32, s32);             /* extern */
extern M2C_UNK D_00352D98;

void func_00235F30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    if (arg1 != 0xFFFFFFFF) {
        M2C_FIELD(arg0, s32 *, 0xC) = func_002392A8(&D_00352D98, func_00234020(), arg1);
    }
}
