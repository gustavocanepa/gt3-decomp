/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

M2C_UNK func_0025F938(s32);                         /* extern */
M2C_UNK func_002603B8(s32);                         /* extern */
M2C_UNK func_00264868();                            /* extern */
M2C_UNK func_00285A70(s32);                         /* extern */
M2C_UNK func_00285AB0(s32);                         /* extern */
extern s32 D_003532C0;

void func_0025F510(void *arg0) {
    s32 temp_s1;

    func_002603B8(M2C_FIELD(arg0, s32 *, 0xC));
    func_0025F938(M2C_FIELD(arg0, s32 *, 8));
    func_00264868();
    temp_s1 = M2C_FIELD(arg0, s32 *, 0);
    func_00285AB0(temp_s1);
    func_00285A70(temp_s1);
    D_003532C0 = 0;
}
