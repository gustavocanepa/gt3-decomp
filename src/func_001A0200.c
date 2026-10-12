/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0018FC18(s32, s32, void *, M2C_UNK *, void *); /* extern */
extern s32 D_0035217C;

u32 func_001A0200(void *arg0) {
    struct StackFrame_001A0200 { s32 sp0; s32 sp4; s8 pad0[0x8]; } sp_;

    sp_.sp0 = (s32) M2C_FIELD(arg0, s16 *, 0x46);
    func_0018FC18(D_0035217C, arg0 + 0x10, ((s8 *)&sp_), &sp_.sp4, arg0 + 0x34);
    M2C_FIELD(arg0, s16 *, 0x46) = (s16) (u16) sp_.sp0;
    return (u32) ~sp_.sp0 >> 0x1F;
}
