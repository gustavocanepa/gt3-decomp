/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0026C3A8(s32);                             /* extern */
extern s32 D_003529B0;
extern s32 D_003529B4;
extern s32 D_003529B8;

void func_001F4D80(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_0026C3A8(arg0 * arg1);
    D_003529B4 = arg0;
    D_003529B8 = arg1;
    D_003529B0 = temp_v0;
}
