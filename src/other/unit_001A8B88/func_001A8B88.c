/* compiler: ee-gcc2.96-nosib */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0019BEF0(s32, f32, f32, f32, f32, f32, f32, f32); /* extern */

struct func_001A8B88_arg0 {
    char pad0[0xE60];
    f32 unkE60;
    f32 unkE64;
    f32 unkE68;
    f32 unkE6C;
    f32 unkE70;
    f32 unkE74;
    f32 unkE78;
    f32 unkE7C;
};

void func_001A8B88(struct func_001A8B88_arg0 *arg0, s32 arg1) {
    f32 temp_f0;

    temp_f0 = arg0->unkE6C;
    func_0019BEF0(arg1, arg0->unkE60 * temp_f0, arg0->unkE64 * temp_f0, arg0->unkE68 * temp_f0, arg0->unkE70, arg0->unkE74, arg0->unkE78, arg0->unkE7C);
}
