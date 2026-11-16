#include "types.h"

extern "C" void func_00151798();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031ECA0[];
extern int D_004B1A80;

extern int D_004B1B60;

extern "C" void *func_00154570(void) {
    if (D_004B1B60 == 0) {
        func_00151798();
        func_0027C3E8(&D_004B1B60, D_0031ECA0, &D_004B1A80);
    }
    return &D_004B1B60;
}
