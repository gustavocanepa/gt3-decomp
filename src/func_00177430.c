/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00234020(void *);                          /* extern */
s32 func_002392A8(M2C_UNK *, s32, s32);             /* extern */
extern M2C_UNK D_00352D98;

void func_00177430(void *arg0) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = arg0 + 0x20;
    temp_v0 = func_002392A8(&D_00352D98, func_00234020(temp_s0), M2C_FIELD(temp_s0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x18A8) = (s32) ((temp_v0 <= -1) ? 0 : temp_v0);
}
