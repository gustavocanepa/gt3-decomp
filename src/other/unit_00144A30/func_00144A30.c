/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0027E8B0(s32, s8);                         /* extern */
extern s32 D_00351754;

s32 func_00144A30(s8 arg0) {
    s32 temp_v0;

    if ((arg0 == 0) || (temp_v0 = func_0027E8B0(D_00351754, arg0), (temp_v0 == 0))) {
        return -1;
    }
    return temp_v0 - D_00351754;
}
