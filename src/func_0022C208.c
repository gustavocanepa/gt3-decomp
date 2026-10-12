/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern s32 D_00352B8C;

s32 func_0022C208(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_00352B8C;
    D_00352B8C = arg0;
    return temp_v0;
}
