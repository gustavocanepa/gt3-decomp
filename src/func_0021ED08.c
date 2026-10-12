/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern f32 D_00350928;

s32 func_0021ED08(void *arg0, f32 fparg0) {
    f32 temp_f1;
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (var_v0 < 0) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0xC);
        var_v0 = 0;
        if (!(temp_f1 < fparg0)) {
            var_v0 = 2;
            if ((temp_f1 * D_00350928) < fparg0) {
                var_v0 = 1;
            }
        }
    }
    return var_v0;
}
