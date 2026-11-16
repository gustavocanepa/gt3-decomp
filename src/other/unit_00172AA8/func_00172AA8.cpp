#include "types.h"

extern "C" void func_00172B80();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00324FB8[];
extern int D_004B1D50;
extern int D_004B1D70;

extern "C" void *func_00172AA8(void) {
    if (D_004B1D70 == 0) {
        func_00172B80();
        func_0027C3E8(&D_004B1D70, D_00324FB8, &D_004B1D50);
    }
    return &D_004B1D70;
}
