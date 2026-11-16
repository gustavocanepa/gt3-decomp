#include "types.h"

extern "C" void func_001BBA48();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003371C0[];
extern int D_004B2500;
extern int D_004B2690;

extern "C" void *func_001CD9B0(void) {
    if (D_004B2690 == 0) {
        func_001BBA48();
        func_0027C3E8(&D_004B2690, D_003371C0, &D_004B2500);
    }
    return &D_004B2690;
}
