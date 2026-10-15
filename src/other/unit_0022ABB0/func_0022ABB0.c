/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0022AAB8(s32);                         /* extern */
s32 func_002417C0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_00352B00;

extern char D_002F33B0[];
extern char D_003414A0[];
void func_0022ABB0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    s32 temp_v0;

    if (D_00352B00 == 0) {
        temp_v0 = func_002417C0((s32)D_003414A0, 0, 0, 1, (s32)D_002F33B0);
        func_0022AAB8(temp_v0);
        D_00352B00 = temp_v0;
    }
}
