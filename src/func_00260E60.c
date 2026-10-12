/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00260BD8(s32);                         /* extern */
s32 func_00260EC0(s32);                             /* extern */
M2C_UNK func_002613C0();                            /* extern */
extern s32 D_00353138;
extern s32 D_0035313C;
extern s32 D_0035315C;

void func_00260E60(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;

    func_002613C0();
    temp_s0 = D_00353138 * D_0035313C;
    temp_s0_2 = ((D_0035315C ^ 3) != 0) ? (temp_s0 >> 1) : temp_s0;
    do {

    } while (func_00260EC0(temp_s0_2) >= 0);
    func_00260BD8(arg0);
}
