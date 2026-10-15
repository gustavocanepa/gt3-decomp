/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0025F840(s32);                             /* extern */
extern s32 D_00353114;
extern s32 D_0035311C;

s32 func_0025EC10(void *arg0) {
    if (D_0035311C == 0) {
        if (D_00353114 != 0) {
            return func_0025F840(M2C_FIELD(arg0, s32 *, 0x12C));
        }
        /* Duplicate return node #0x1.0000000000000p+2 Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
