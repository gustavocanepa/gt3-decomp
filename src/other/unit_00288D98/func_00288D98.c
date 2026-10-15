/* compiler: ee-gcc2.9-991111 */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0028D6A0();                            /* extern */
void func_0028D6E8();                            /* extern */
extern char D_004AF940[];

struct func_00288D98_arg0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};
struct func_00288D98_var_a0 {
    char pad0[0x14];
    void *unk14;
};

struct func_00288D98_base {
    char pad0[0x28];
    void *unk28;
};

void func_00288D98(struct func_00288D98_arg0 *arg0, s32 arg1) {
    s8 *base;
    void *temp_v0;
    void *temp_v0_2;
    struct func_00288D98_var_a0 *var_a0;
    void *var_v1;

    func_0028D6A0();
    base = D_004AF940;
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
    temp_v0 = ((struct func_00288D98_base *)base)->unk28;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    if (temp_v0 == NULL) {
        ((struct func_00288D98_base *)base)->unk28 = arg0;
    } else {
        var_a0 = temp_v0;
        var_v1 = var_a0->unk14;
        if (var_v1 != NULL) {
            do {
                var_a0 = var_v1;
                temp_v0_2 = var_a0->unk14;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_a0->unk14 = arg0;
    }
    func_0028D6E8();
}
