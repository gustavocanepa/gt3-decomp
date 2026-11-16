#include "types.h"

extern "C" void func_001B4850();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_00325868[];
extern int D_00351CC8;
extern int D_004B1D90;

extern "C" void *func_00174298(void) {
    if (D_004B1D90 == 0) {
        func_001B4850();
        func_0027C3C0(&D_004B1D90, D_00325868, &D_00351CC8, 1);
    }
    return &D_004B1D90;
}
