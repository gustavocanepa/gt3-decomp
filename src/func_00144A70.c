/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern s32 D_00351754;

s8 func_00144A70(s32 arg0) {
    return *(s32 *)(D_00351754 + arg0);
}
