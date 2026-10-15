/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_002221C8();                                /* extern */
extern f32 D_00350990;
extern f32 D_00350994;
extern f32 D_00350998;

s32 func_00222258(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    f32 temp_f0;
    s32 var_v0;

    temp_f0 = func_002221C8();
    var_v0 = 0;
    if (!(D_00350990 < temp_f0)) {
        var_v0 = 1;
        if (!(D_00350994 < temp_f0)) {
            var_v0 = 3;
            if (D_00350998 < temp_f0) {
                var_v0 = 2;
            }
        }
    }
    return var_v0;
}
