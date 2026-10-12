/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_001C9430(s32);                         /* extern */
M2C_UNK func_001C9550(s32, f32);                    /* extern */
s32 func_0023C438(s32);                             /* extern */
extern f32 D_00352648;
extern s32 D_0035264C;
extern s32 D_00352650;

void func_001C48A0(void *arg0) {
    if ((D_00352650 != 0) || (D_0035264C >= func_0023C438(M2C_FIELD(arg0, s32 *, 0x160) + 0xB0))) {
        func_001C9550(M2C_FIELD(arg0, s32 *, 0x160), D_00352648);
    }
    func_001C9430(M2C_FIELD(arg0, s32 *, 0x160));
    D_00352650 = 0;
}
