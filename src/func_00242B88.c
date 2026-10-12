/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern void *D_00352FC0;

void *func_00242B88(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, void **, 0) = (void *) D_00352FC0;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    D_00352FC0 = arg0;
    return arg0;
}
