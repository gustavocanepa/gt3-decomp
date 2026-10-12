/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern s32 D_00352754;
extern s32 D_00352758;

void func_001D1BD8(s32 arg0, s32 arg1) {
    D_00352758 = arg0;
    D_00352754 = arg1;
}
