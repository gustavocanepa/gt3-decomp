#include "types.h"

extern "C" void func_00187EF8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032BB70[];
extern int D_004B1FC0;

extern int D_004B2030;

extern "C" void *func_00189948(void) {
    if (D_004B2030 == 0) {
        func_00187EF8();
        func_0027C3E8(&D_004B2030, D_0032BB70, &D_004B1FC0);
    }
    return &D_004B2030;
}
