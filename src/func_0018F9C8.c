/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern f32 D_0034FD38;

f32 func_0018F9C8(void **arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0x10) + M2C_FIELD(M2C_FIELD(*arg0, void **, 0x70), s32 *, 0x2C)), f32 *, 0xC) + D_0034FD38;
}
