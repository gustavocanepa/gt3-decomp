#include "types.h"

extern "C" void func_00151A80();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031E1A0[];
extern int D_004B1980;
extern int D_004B19A0;

extern "C" void *func_001519D8(void) {
    if (D_004B19A0 == 0) {
        func_00151A80();
        func_0027C3E8(&D_004B19A0, D_0031E1A0, &D_004B1980);
    }
    return &D_004B19A0;
}
