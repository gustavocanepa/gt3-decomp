#include "types.h"

extern "C" void func_001BA920();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00313BF8[];
extern int D_004B24E0;
extern int D_004B1690;

extern "C" void *func_00129EB8(void) {
    if (D_004B1690 == 0) {
        func_001BA920();
        func_0027C3E8(&D_004B1690, D_00313BF8, &D_004B24E0);
    }
    return &D_004B1690;
}
