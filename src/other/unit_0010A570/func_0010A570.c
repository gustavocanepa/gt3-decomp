/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_001051B0(s32);                             /* extern */
extern f32 D_0034FA20;

void func_0010A570(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x3AD0), f32 *, 0x108) = (f32) M2C_FIELD(arg0, f32 *, 0x3AD4);
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3AD0), f32 *, 0x108) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3AD4) - func_001051B0(arg1)) - D_0034FA20);
}
