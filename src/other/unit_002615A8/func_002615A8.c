/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00261748();                            /* extern */
s32 func_00264070(M2C_UNK);                         /* extern */
M2C_UNK func_00264180(M2C_UNK);                     /* extern */
M2C_UNK func_002643D0();                            /* extern */
M2C_UNK func_00264480();                            /* extern */
extern s32 D_00353148;
extern s32 D_0035314C;

void func_002615A8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    D_00353148 = func_00264070(0xC);
    D_0035314C = func_00264070(0xC);
    func_00264070(4);
    func_00264070(4);
    func_00264070(0x12);
    func_00264180(1);
    func_00264070(0xA);
    func_00264070(1);
    if (func_00264070(1) != 0) {
        func_002643D0();
    }
    if (func_00264070(1) != 0) {
        func_00264480();
    }
    func_00261748();
}
