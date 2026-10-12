/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00264070(M2C_UNK);                         /* extern */
M2C_UNK func_00264180(M2C_UNK);                     /* extern */
extern s32 D_00353148;
extern s32 D_0035314C;
extern s32 D_00353150;
extern s32 D_00353154;

void func_00261850(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    s32 temp_s0;
    s32 temp_s1;

    D_00353150 = 1;
    func_00264070(8);
    D_00353154 = func_00264070(1);
    func_00264070(2);
    temp_s1 = func_00264070(2);
    temp_s0 = func_00264070(2);
    func_00264070(0xC);
    func_00264180(1);
    func_00264070(8);
    func_00264070(1);
    func_00264070(2);
    func_00264070(5);
    D_00353148 = (temp_s1 << 0xC) | (D_00353148 & 0xFFF);
    D_0035314C = (temp_s0 << 0xC) | (D_0035314C & 0xFFF);
}
