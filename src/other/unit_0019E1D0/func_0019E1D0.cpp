#include "types.h"

extern "C" void func_0019D198();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032FC98[];
extern int D_004B2300;

extern int D_004B2350;

extern "C" void *func_0019E1D0(void) {
    if (D_004B2350 == 0) {
        func_0019D198();
        func_0027C3E8(&D_004B2350, D_0032FC98, &D_004B2300);
    }
    return &D_004B2350;
}
