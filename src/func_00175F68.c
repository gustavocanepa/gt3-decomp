/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern f32 D_0034FCB4;

void func_00175F68(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) D_0034FCB4;
}
