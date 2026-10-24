#include "types.h"

extern "C" void func_001517F8();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_0031ECF8[];
extern int D_00351868;

extern int D_004B1B00;

extern "C" void *func_00154618(void) {
    if (D_004B1B00 == 0) {
        func_001517F8();
        func_0027C3C0(&D_004B1B00, D_0031ECF8, &D_00351868, 1);
    }
    return &D_004B1B00;
}
