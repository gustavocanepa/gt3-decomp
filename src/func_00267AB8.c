/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00267AE8();                            /* extern */
M2C_UNK func_00274F08(s32);                         /* extern */
M2C_UNK func_00285CA0(s32);                         /* extern */
extern s32 D_003531A4;

void func_00267AB8(s32 arg0) {
    func_00285CA0(D_003531A4);
    func_00274F08(arg0);
    func_00267AE8();
}
