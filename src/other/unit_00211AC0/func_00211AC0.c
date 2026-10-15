/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0026C118(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00353250;

void func_00211AC0(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 > 0) {
        do {
            var_s0 -= 1;
            func_0026C118(&D_00353250);
        } while (var_s0 > 0);
    }
}
