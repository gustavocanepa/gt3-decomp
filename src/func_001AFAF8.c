/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_001C2448(s32, void *);                     /* extern */
s32 func_001C2508(s32, s32, M2C_UNK);               /* extern */
s32 func_002453C8(M2C_UNK *);                       /* extern */
M2C_UNK func_0026C718(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0027E794(void *, s32);                 /* extern */
extern M2C_UNK D_00352FD8;

extern char D_003316D8[];
extern char D_003523A0[];
s32 func_001AFAF8(s32 arg0, s32 arg1, s32 arg2) {
    struct StackFrame_001AFAF8 { s8 pad0[0x100]; } sp_;
    func_0026C718(((s8 *)&sp_), (s32)D_003316D8, func_002453C8(&D_00352FD8));
    func_0027E794(((s8 *)&sp_), arg1);
    func_0027E794(((s8 *)&sp_), (s32)D_003523A0);
    if (func_001C2448(arg0, ((s8 *)&sp_)) == 0) {
        return 0;
    }
    return func_001C2508(arg0, arg2, 0) != 0;
}
