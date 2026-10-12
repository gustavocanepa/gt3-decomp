/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0018A0E8(s32, M2C_UNK);                    /* extern */
extern s32 D_00351F08;

extern char D_002B96C0[];
s32 func_0018A110(u32 arg0) {
    if (arg0 >= 3U) {
        return D_00351F08;
    }
    return func_0018A0E8((arg0 * 8) + (s32)D_002B96C0, 1);
}
