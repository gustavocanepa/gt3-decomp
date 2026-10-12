/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern void *D_00352ACC;

s32 func_00223F30(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x17C);
    if (temp_a0 < 0) {
        return 0;
    }
    return M2C_FIELD(D_00352ACC, s32 *, 0x24) + (temp_a0 << 5);
}
