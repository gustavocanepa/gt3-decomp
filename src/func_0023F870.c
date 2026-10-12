/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0023F358(s32, s32);                        /* extern */
M2C_UNK func_00269C10(s32);                         /* extern */
M2C_UNK func_00285CA0(s32);                         /* extern */
extern void *D_00352F60;

s32 func_0023F870(s32 arg0, s32 arg1) {
    s32 temp_s0;

    func_00285CA0(M2C_FIELD(D_00352F60, s32 *, 0x140C));
    temp_s0 = func_0023F358(arg0, arg1);
    func_00269C10(M2C_FIELD(D_00352F60, s32 *, 0x140C));
    return temp_s0;
}
