#include "types.h"

extern "C" void func_001028F0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00308A78[];
extern int D_004B1410;

extern int D_004B13F0;

extern "C" void *func_00102650(void) {
    if (D_004B13F0 == 0) {
        func_001028F0();
        func_0027C3E8(&D_004B13F0, D_00308A78, &D_004B1410);
    }
    return &D_004B13F0;
}
