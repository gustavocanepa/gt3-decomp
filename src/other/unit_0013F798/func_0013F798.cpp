#include "types.h"

extern "C" void func_00138BD8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003199F8[];
extern int D_004B16A0;

extern int D_004B1840;

extern "C" void *func_0013F798(void) {
    if (D_004B1840 == 0) {
        func_00138BD8();
        func_0027C3E8(&D_004B1840, D_003199F8, &D_004B16A0);
    }
    return &D_004B1840;
}
