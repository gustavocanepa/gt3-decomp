#include "types.h"

extern "C" void func_00182060();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00328F90[];
extern int D_004B1EF0;
extern int D_004B1F00;

extern "C" void *func_001827B0(void) {
    if (D_004B1F00 == 0) {
        func_00182060();
        func_0027C3E8(&D_004B1F00, D_00328F90, &D_004B1EF0);
    }
    return &D_004B1F00;
}
