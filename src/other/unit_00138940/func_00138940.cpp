#include "types.h"

extern "C" void func_00138AB8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003176F8[];
extern int D_004B16C0;
extern int D_004B1660;

extern "C" void *func_00138940(void) {
    if (D_004B1660 == 0) {
        func_00138AB8();
        func_0027C3E8(&D_004B1660, D_003176F8, &D_004B16C0);
    }
    return &D_004B1660;
}
