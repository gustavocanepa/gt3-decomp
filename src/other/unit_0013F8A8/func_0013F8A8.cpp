#include "types.h"

extern "C" void func_001BA920();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003199C0[];
extern int D_004B24E0;

extern int D_004B1850;

extern "C" void *func_0013F8A8(void) {
    if (D_004B1850 == 0) {
        func_001BA920();
        func_0027C3E8(&D_004B1850, D_003199C0, &D_004B24E0);
    }
    return &D_004B1850;
}
