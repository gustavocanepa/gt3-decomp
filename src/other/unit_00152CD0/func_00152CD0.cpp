#include "types.h"

extern "C" void func_001537A8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern int D_004B1B70;

extern int D_004B1AD0;

extern "C" void *func_00152CD0(void) {
    if (D_004B1AD0 == 0) {
        func_001537A8();
        func_0027C3E8(&D_004B1AD0, ((char *)"Q212GranTurismo413UpdateManager"), &D_004B1B70);
    }
    return &D_004B1AD0;
}
