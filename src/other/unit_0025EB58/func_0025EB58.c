/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0025F598(s32);                             /* extern */
s32 func_0025F5A0(s32);                             /* extern */
extern s32 D_00353114;

s32 func_0025EB58(void *arg0, s32 *arg1, s32 *arg2) {
    if (D_00353114 == 0) {
        return 1;
    }
    if (arg1 != NULL) {
        *arg1 = func_0025F598(M2C_FIELD(arg0, s32 *, 0x12C));
    }
    if (arg2 != NULL) {
        *arg2 = func_0025F5A0(M2C_FIELD(arg0, s32 *, 0x12C));
    }
    return 0;
}
