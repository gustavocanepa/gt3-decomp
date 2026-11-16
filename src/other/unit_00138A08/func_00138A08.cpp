#include "types.h"

extern "C" void func_00138AB8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00317720[];
extern int D_004B16C0;

extern int D_004B16F0;

extern "C" void *func_00138A08(void) {
    if (D_004B16F0 == 0) {
        func_00138AB8();
        func_0027C3E8(&D_004B16F0, D_00317720, &D_004B16C0);
    }
    return &D_004B16F0;
}
