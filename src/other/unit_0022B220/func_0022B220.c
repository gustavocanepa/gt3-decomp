/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0022B410();                            /* extern */
M2C_UNK func_00268430();                            /* extern */
M2C_UNK func_00269D18(M2C_UNK *);                   /* extern */
M2C_UNK func_0026C380(s32);                         /* extern */
M2C_UNK func_00285960(M2C_UNK, s32);                /* extern */
M2C_UNK func_00285C70(s32);                         /* extern */
M2C_UNK func_00286688(M2C_UNK);                     /* extern */
extern s32 D_00352B18;
extern s32 D_00352B1C;
extern s32 D_00352B5C;
extern s32 D_00352B60;
extern M2C_UNK D_00353268;

void func_0022B220(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    s32 temp_a0;
    s32 temp_a0_2;

    if (D_00352B1C != 0) {
        func_00268430();
        func_0022B410();
        func_0026C380(D_00352B1C);
        func_00286688(3);
        func_00285960(3, D_00352B5C);
        temp_a0 = D_00352B60;
        D_00352B60 = -1;
        func_00285C70(temp_a0);
        func_00269D18(&D_00353268);
        temp_a0_2 = D_00352B18;
        D_00352B18 = -1;
        func_00285C70(temp_a0_2);
        D_00352B1C = 0;
    }
}
