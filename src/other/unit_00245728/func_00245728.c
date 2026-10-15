/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern void *D_00353024;

extern char D_00343C88[];
void *func_00245728(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, void **, 0) = (void *) D_00353024;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32)D_00343C88;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = arg4;
    D_00353024 = arg0;
    return arg0;
}
