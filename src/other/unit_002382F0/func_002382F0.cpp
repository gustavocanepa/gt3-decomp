#include "types.h"

extern "C" void func_00238350();
extern "C" void func_002377C0();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_00342398[];
extern char D_003423B0[];

extern int D_004B2A50;

extern "C" void *func_002382F0(void) {
    if (D_004B2A50 == 0) {
        func_00238350();
        func_002377C0();
        func_0027C3C0(&D_004B2A50, D_00342398, D_003423B0, 2);
    }
    return &D_004B2A50;
}
