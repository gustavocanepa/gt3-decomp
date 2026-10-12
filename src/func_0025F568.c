/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern s32 D_00353124;

s32 func_0025F568(void *arg0, void *arg1) {
    s32 temp_a2;
    s32 temp_a3;

    temp_a3 = M2C_FIELD(arg1, s32 *, 0);
    temp_a2 = M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_a3;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_a2;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((temp_a3 >> 4) * (temp_a2 >> 4));
    D_00353124 = 0;
    return 0;
}
