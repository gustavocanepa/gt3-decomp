/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0021F6E0(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32); /* extern */
extern f32 D_00350934;
extern f32 D_00350938;
extern f32 D_0035093C;

extern char D_00340CB0[];
void *func_0021F660(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = (s32)D_00340CB0;
    func_0021F6E0(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, D_00350934, D_00350938, D_0035093C);
    return arg0;
}
