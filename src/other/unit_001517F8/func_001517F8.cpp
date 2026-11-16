#include "types.h"

extern "C" void func_00151918();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_0031E0E8[];
extern int D_00351840;

extern int D_004B1A70;

extern "C" void *func_001517F8(void) {
    if (D_004B1A70 == 0) {
        func_00151918();
        func_0027C3C0(&D_004B1A70, D_0031E0E8, &D_00351840, 1);
    }
    return &D_004B1A70;
}
