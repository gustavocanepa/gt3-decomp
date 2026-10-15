/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern void *D_003528F8;

void *func_001D8220(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, void **, 0) = (void *) D_003528F8;
    D_003528F8 = arg0;
    return arg0;
}
