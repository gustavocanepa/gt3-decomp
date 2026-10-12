/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0026AA50(s32);                         /* extern */
extern s32 D_00352510;

extern char D_0049C7E0[];
void func_001B3998(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    s32 temp_v0;
    void *temp_s0;

    func_0026AA50((D_00352510 * 0x18) + (s32)D_0049C7E0);
    temp_v0 = D_00352510 * 0x18;
    D_00352510 -= 1;
    temp_s0 = temp_v0 + (s32)D_0049C7E0;
    *(s32 *)((s32)D_0049C7E0 + temp_v0) = 0;
    M2C_FIELD(temp_s0, s32 *, 4) = 0;
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
}
