#include "types.h"

extern "C" void func_00147820();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031C1C0[];
extern int D_004B1880;

extern int D_004B1910;

extern "C" void *func_001477D0(void) {
    if (D_004B1910 == 0) {
        func_00147820();
        func_0027C3E8(&D_004B1910, D_0031C1C0, &D_004B1880);
    }
    return &D_004B1910;
}
