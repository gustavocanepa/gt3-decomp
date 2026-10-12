/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern void *D_00352ACC;

s32 func_00223E48(void *arg0) {
    return *(s32 *)((M2C_FIELD(arg0, s32 *, 0x178) * 0x10) + M2C_FIELD(D_00352ACC, s32 *, 0x20)) & 1;
}
