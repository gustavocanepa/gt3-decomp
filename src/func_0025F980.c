/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern s32 D_003532AC;

s32 func_0025F980(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 8);
    return M2C_FIELD(temp_v1, s32 *, 0x34) + (M2C_FIELD(temp_v1, s32 *, 0x30) << D_003532AC);
}
