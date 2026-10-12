/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00261560();                            /* extern */
M2C_UNK func_00261720();                            /* extern */
s32 func_002640B0(M2C_UNK);                         /* extern */
M2C_UNK func_00264180(M2C_UNK);                     /* extern */
s32 func_00264D00();                                /* extern */
extern s32 D_00353138;

s32 func_002613F0(s32 *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_00261560();
    temp_v0 = func_002640B0(0x20);
    if ((u32) (temp_v0 - 0x101) >= 0xAFU) {
        func_00264180(0x20);
        return -1;
    }
    func_00264180(0x20);
    func_00261720();
    temp_v0_2 = func_00264D00();
    *arg1 = temp_v0_2;
    *arg0 = ((((temp_v0 & 0xFF) - 1) * D_00353138) + temp_v0_2) - 1;
    *arg1 = 1;
    return 1;
}
