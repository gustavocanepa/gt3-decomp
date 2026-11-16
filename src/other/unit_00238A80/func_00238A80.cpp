/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern s8 D_00352D78;

s8 func_00238A80(s32 arg0, s32 arg1) {
    return *(s8 *)(arg1 + &D_00352D78);
}
