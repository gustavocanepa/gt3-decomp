/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_0023C880(M2C_UNK, s32);                    /* extern */
s32 func_00242058(void *);                          /* extern */
s32 func_002453C8(M2C_UNK *);                       /* extern */
M2C_UNK func_0026C718(void *, M2C_UNK, s32);        /* extern */
extern s32 D_00351FA4;
extern s32 D_00351FA8;
extern s32 D_00351FBC;
extern M2C_UNK D_00352FD8;

extern char D_002F1968[];
extern char D_0032DFA0[];
void func_00191830(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, M2C_UNK arg5, M2C_UNK arg6) {
    struct StackFrame_00191830 { s8 pad0[0x40]; } sp_;
    if (D_00351FA4 == 0) {
        func_0026C718(((s8 *)&sp_), (s32)D_0032DFA0, func_002453C8(&D_00352FD8));
        D_00351FA4 = func_00242058(((s8 *)&sp_));
    }
    if (D_00351FA8 < 0) {
        D_00351FA8 = func_0023C880((s32)D_002F1968, D_00351FBC);
    }
}
