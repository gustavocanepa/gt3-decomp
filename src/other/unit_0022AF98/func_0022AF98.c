/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_002694E8(M2C_UNK);                     /* extern */
extern s32 D_00352B24;

extern char D_0049D1B0[];
void func_0022AF98(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    if (D_00352B24 != 0) {
        func_002694E8((s32)D_0049D1B0);
        D_00352B24 = 0;
    }
}
