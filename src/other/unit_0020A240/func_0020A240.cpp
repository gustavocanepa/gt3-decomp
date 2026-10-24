#include "types.h"

extern "C" void func_0020A290();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0033F020[];
extern int D_004B1200;

extern int D_004B2960;

extern "C" void *func_0020A240(void) {
    if (D_004B2960 == 0) {
        func_0020A290();
        func_0027C3E8(&D_004B2960, D_0033F020, &D_004B1200);
    }
    return &D_004B2960;
}
