/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00260660(s32);                             /* extern */
extern s32 D_003532C0;

s32 func_0025F840(void *arg0) {
    if (D_003532C0 == 0) {
        return 0;
    }
    return func_00260660(M2C_FIELD(arg0, s32 *, 0xC));
}
