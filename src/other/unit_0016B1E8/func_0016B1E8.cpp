#include "types.h"

extern "C" void func_0016B240();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00323718[];
extern int D_004B1C30;
extern int D_004B1C00;

extern "C" void *func_0016B1E8(void) {
    if (D_004B1C00 == 0) {
        func_0016B240();
        func_0027C3E8(&D_004B1C00, D_00323718, &D_004B1C30);
    }
    return &D_004B1C00;
}
