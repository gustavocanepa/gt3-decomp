/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern s32 D_003521E8;

void func_0017BBB8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x9788) = arg1;
    D_003521E8 = arg1;
}
