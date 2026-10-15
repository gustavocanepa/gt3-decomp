/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void func_00115CE8(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 D_00352CA8;

void func_00115C80(s32 arg0, s32 arg1) {
    func_00115CE8(arg0, 0, 1);
    if (arg1 == 5) {
        func_00115CE8(arg0, 1, 1);
    } else {
        func_00115CE8(arg0, 1, 2);
    }
    D_00352CA8 = arg1;
}
