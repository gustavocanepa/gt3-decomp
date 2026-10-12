/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00269B30(M2C_UNK);                         /* extern */
extern s32 D_003531A4;

void func_00267A58(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    if (D_003531A4 < 0) {
        D_003531A4 = func_00269B30(1);
    }
}
