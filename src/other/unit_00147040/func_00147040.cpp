#include "types.h"

extern "C" void func_00147120();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031C098[];
extern int D_004B18E0;

extern int D_004B1960;

extern "C" void *func_00147040(void) {
    if (D_004B1960 == 0) {
        func_00147120();
        func_0027C3E8(&D_004B1960, D_0031C098, &D_004B18E0);
    }
    return &D_004B1960;
}
