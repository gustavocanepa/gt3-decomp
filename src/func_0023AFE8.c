/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00234020(s32);                             /* extern */
void *func_002391A0(M2C_UNK *, s32);                /* extern */
s32 func_00239228(M2C_UNK *, s32, s32);             /* extern */
extern M2C_UNK D_00352D98;

s32 func_0023AFE8(void *arg0, s32 arg1) {
    return arg1 | M2C_FIELD(func_002391A0(&D_00352D98, func_00239228(&D_00352D98, func_00234020(arg0 + 0x10), M2C_FIELD(arg0, s32 *, 0x1C))), s32 *, 0xC);
}
