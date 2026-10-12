/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0026C380(s32);                         /* extern */
extern s32 D_00351F94;
extern s32 D_00351F98;

void func_0018F7D8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    if (D_00351F94 != 0) {
        func_0026C380(D_00351F94);
        D_00351F94 = 0;
    }
    if (D_00351F98 != 0) {
        func_0026C380(D_00351F98);
        D_00351F98 = 0;
    }
}
