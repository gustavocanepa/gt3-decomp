/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_001A8588(void *, f32, f32);                /* extern */
M2C_UNK func_0021F090(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32); /* extern */
extern f32 D_00352AC4;

void func_001AC3D0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x23C);
    func_0021F090(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, M2C_FIELD(temp_v0, f32 *, 0xA60), M2C_FIELD(temp_v0, f32 *, 0xA64), M2C_FIELD(temp_v0, f32 *, 0xA68), M2C_FIELD(temp_v0, f32 *, 0xA6C));
    D_00352AC4 = func_001A8588(M2C_FIELD(arg0, void **, 0x23C), M2C_FIELD(arg0, f32 *, 0x240), M2C_FIELD(arg0, f32 *, 0x244));
}
