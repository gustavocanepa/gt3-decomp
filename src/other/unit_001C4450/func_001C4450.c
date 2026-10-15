/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_001C4328(s32);                             /* extern */
s32 func_001C4388();                                /* extern */
s32 func_00239228(M2C_UNK *, s32, s32);             /* extern */
s32 func_00239338(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK D_00352D98;

s32 func_001C4450(s32 arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= func_001C4388())) {
        return 0;
    }
    return func_00239338(&D_00352D98, func_00239228(&D_00352D98, func_001C4328(arg0), arg1));
}
