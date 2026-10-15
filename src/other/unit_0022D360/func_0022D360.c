/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0022D308(s32);                         /* extern */
extern s32 D_00352CAC;
extern s32 D_00352CB0;
extern s32 D_00352CDC;

extern char D_002E98E8[];
void func_0022D360(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 7;
    var_s0 = (s32)D_002E98E8;
    do {
        var_s1 -= 1;
        func_0022D308(var_s0);
        var_s0 += 5;
    } while (var_s1 >= 0);
    D_00352CB0 = 0;
    D_00352CDC = 0;
    D_00352CAC = 0;
}
