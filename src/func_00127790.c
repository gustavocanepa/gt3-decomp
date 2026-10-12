/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00245728(void *, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_003512B8;
extern M2C_UNK D_003512C8;

extern char D_003129C0[];
extern char D_003512D0[];
void *func_00127790(void *arg0) {
    func_00245728(arg0, (s32)D_003512D0, &D_003512B8, &D_003512C8, 1);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32)D_003129C0;
    return arg0;
}
