/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0026C118(s32);                         /* extern */
f32 func_0026C178(s32);                             /* extern */
extern f32 D_00350788;

void func_00204040(void *arg0, s32 arg1) {
    func_0026C118(arg1);
    if (func_0026C178(arg1) < D_00350788) {
        func_0026C118(arg1);
        M2C_FIELD(arg0, f32 *, 4) = (f32) ((func_0026C178(arg1) * 0x1.0000000000000p+8f) - 0x1.0000000000000p+7f);
    }
}
