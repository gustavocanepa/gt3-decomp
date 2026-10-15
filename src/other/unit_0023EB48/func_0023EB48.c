/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00269C10(s32);                         /* extern */
M2C_UNK func_00269D18(void *);                      /* extern */
M2C_UNK func_0026C380(void *);                      /* extern */
M2C_UNK func_00285C70(s32);                         /* extern */
extern void *D_00352F60;

void func_0023EB48(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    void *temp_s0;

    temp_s0 = D_00352F60;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0x1410) = 1;
        func_00269C10(M2C_FIELD(temp_s0, s32 *, 0x1408));
        func_00269D18(temp_s0 + 0x1400);
        func_00285C70(M2C_FIELD(temp_s0, s32 *, 0x1408));
        func_00285C70(M2C_FIELD(temp_s0, s32 *, 0x140C));
        func_0026C380(D_00352F60);
        D_00352F60 = NULL;
    }
}
