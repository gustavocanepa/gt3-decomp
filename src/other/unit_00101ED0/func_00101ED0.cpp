#include "types.h"

extern "C" void func_00101F28();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00308828[];
extern int D_004B13C0;
extern int D_004B13D0;

extern "C" void *func_00101ED0(void) {
    if (D_004B13D0 == 0) {
        func_00101F28();
        func_0027C3E8(&D_004B13D0, D_00308828, &D_004B13C0);
    }
    return &D_004B13D0;
}
