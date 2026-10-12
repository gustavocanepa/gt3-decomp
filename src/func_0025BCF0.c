/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00269C10(s32);                         /* extern */
M2C_UNK func_00285CA0(s32);                         /* extern */
extern s32 D_003530E8;

s32 func_0025BCF0(void *arg0) {
    s32 temp_s0;

    func_00285CA0(D_003530E8);
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x3C);
    func_00269C10(D_003530E8);
    return temp_s0;
}
