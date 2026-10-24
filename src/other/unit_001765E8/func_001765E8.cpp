#include "types.h"

extern "C" void func_00175318();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00326FA0[];
extern int D_004B1DF0;

extern int D_004B1E50;

extern "C" void *func_001765E8(void) {
    if (D_004B1E50 == 0) {
        func_00175318();
        func_0027C3E8(&D_004B1E50, D_00326FA0, &D_004B1DF0);
    }
    return &D_004B1E50;
}
