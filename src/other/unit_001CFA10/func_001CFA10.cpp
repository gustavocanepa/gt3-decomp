#include "types.h"

extern "C" void func_001CF0E0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00337608[];
extern int D_004B26B0;
extern int D_004B26C0;

extern "C" void *func_001CFA10(void) {
    if (D_004B26C0 == 0) {
        func_001CF0E0();
        func_0027C3E8(&D_004B26C0, D_00337608, &D_004B26B0);
    }
    return &D_004B26C0;
}
