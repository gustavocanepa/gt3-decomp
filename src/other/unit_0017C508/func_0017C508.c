/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_002104E8(M2C_UNK);                     /* extern */
M2C_UNK func_0027D7F8(M2C_UNK);                     /* extern */
extern s32 D_00351DF8;

extern char D_0017C4E0[];
extern char D_0049C230[];
s32 func_0017C508(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    if (D_00351DF8 == 0) {
        func_002104E8((s32)D_0049C230);
        D_00351DF8 = 1;
        func_0027D7F8((s32)D_0017C4E0);
    }
    return (s32)D_0049C230;
}
