#include "types.h"

extern "C" void func_001517F8();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_0031ECD8[];
extern int D_00351868;

extern int D_004B1B30;

extern "C" void *func_001569C8(void) {
    if (D_004B1B30 == 0) {
        func_001517F8();
        func_0027C3C0(&D_004B1B30, D_0031ECD8, &D_00351868, 1);
    }
    return &D_004B1B30;
}
