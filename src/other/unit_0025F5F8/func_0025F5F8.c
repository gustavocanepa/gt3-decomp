/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0025F9A0(void *);                      /* extern */
M2C_UNK func_00260410(s32);                         /* extern */
M2C_UNK func_00260998();                            /* extern */
M2C_UNK func_00263F28();                            /* extern */
M2C_UNK func_002641F0();                            /* extern */
M2C_UNK func_00285B80();                            /* extern */
M2C_UNK func_00285B90(s32);                         /* extern */
M2C_UNK func_00285C80(s32);                         /* extern */
M2C_UNK func_00285CA0(s32);                         /* extern */
extern s32 D_00353110;
extern s32 D_00353118;
extern s32 D_003532C0;

void func_0025F5F8(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 8);
    D_003532C0 = 1;
    func_00263F28();
    func_002641F0();
    func_00260410(M2C_FIELD(arg0, s32 *, 0xC));
    func_0025F9A0(temp_s1);
    func_00285C80(D_00353110);
    func_00260998();
    func_00260410(M2C_FIELD(arg0, s32 *, 0xC));
    func_00263F28();
    func_002641F0();
    func_00285CA0(M2C_FIELD(temp_s1, s32 *, 0x38));
    M2C_FIELD(temp_s1, s32 *, 0x40) = 0;
    func_00285C80(M2C_FIELD(temp_s1, s32 *, 0x38));
    if (D_00353118 != -1) {
        func_00285B90(D_00353118);
    }
loop_2:
    func_00285B80();
    goto loop_2;
}
