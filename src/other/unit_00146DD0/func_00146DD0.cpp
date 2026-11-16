#include "types.h"

extern "C" void func_00147120();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031C040[];
extern int D_004B18E0;

extern int D_004B1920;

extern "C" void *func_00146DD0(void) {
    if (D_004B1920 == 0) {
        func_00147120();
        func_0027C3E8(&D_004B1920, D_0031C040, &D_004B18E0);
    }
    return &D_004B1920;
}
