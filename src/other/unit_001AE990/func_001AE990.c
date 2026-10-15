/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00245728(void *, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_00352380;
extern M2C_UNK D_00352388;

extern char D_00331258[];
extern char D_00352390[];
void *func_001AE990(void *arg0) {
    func_00245728(arg0, (s32)D_00352390, &D_00352380, &D_00352388, 1);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32)D_00331258;
    return arg0;
}
