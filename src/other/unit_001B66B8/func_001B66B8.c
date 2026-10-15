/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_00252338(M2C_UNK);                     /* extern */
extern s32 D_00352748;

void func_001B66B8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xAE0), s32 *, 0x20) = 0;
    func_00252338(1);
    D_00352748 = 0;
}
