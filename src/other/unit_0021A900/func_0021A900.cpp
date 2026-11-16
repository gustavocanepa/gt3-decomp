#include "types.h"

extern "C" void func_0021A978();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003409A0[];
extern int D_004B1390;
extern int D_004B13A0;

extern "C" void *func_0021A900(void) {
    if (D_004B13A0 == 0) {
        func_0021A978();
        func_0027C3E8(&D_004B13A0, D_003409A0, &D_004B1390);
    }
    return &D_004B13A0;
}
