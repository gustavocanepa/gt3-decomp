#include "types.h"

extern "C" void func_001CB950();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003125B0[];
extern int D_004B2660;

extern int D_004B15F0;

extern "C" void *func_00127448(void) {
    if (D_004B15F0 == 0) {
        func_001CB950();
        func_0027C3E8(&D_004B15F0, D_003125B0, &D_004B2660);
    }
    return &D_004B15F0;
}
