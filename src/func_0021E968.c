/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0021E910();                                /* extern */
extern s32 D_00352ABC;

s32 func_0021E968(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    return M2C_FIELD(((func_0021E910() * 0x10) + D_00352ABC), s32 *, 8);
}
