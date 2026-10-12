/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern s32 D_003529B0;
extern s32 D_003529B4;

s32 func_001F4DF0(s32 arg0) {
    return D_003529B0 + (D_003529B4 * arg0);
}
