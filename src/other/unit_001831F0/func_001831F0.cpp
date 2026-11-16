#include "types.h"

extern "C" void func_00182060();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003298D0[];
extern int D_004B1EF0;

extern int D_004B1F50;

extern "C" void *func_001831F0(void) {
    if (D_004B1F50 == 0) {
        func_00182060();
        func_0027C3E8(&D_004B1F50, D_003298D0, &D_004B1EF0);
    }
    return &D_004B1F50;
}
