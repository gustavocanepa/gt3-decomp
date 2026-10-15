/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern s32 D_00352560;

s32 func_001B8498(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    s32 *var_v1;
    s32 var_a0;

    var_a0 = 0;
    var_v1 = &D_00352560;
loop_1:
    var_a0 += 1;
    if (*var_v1 != 0) {
        return 1;
    }
    var_v1 += 1;
    if (var_a0 >= 2) {
        return 0;
    }
    goto loop_1;
}
