/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern s32 D_00352B8C;

s32 func_0022BFC0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x10);
    }
    return D_00352B8C;
}
