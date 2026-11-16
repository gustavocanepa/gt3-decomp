#include "types.h"

extern "C" void func_001B2660();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00332070[];
extern int D_004B2420;
extern int D_004B1290;

extern "C" void *func_001B2550(void) {
    if (D_004B1290 == 0) {
        func_001B2660();
        func_0027C3E8(&D_004B1290, D_00332070, &D_004B2420);
    }
    return &D_004B1290;
}
