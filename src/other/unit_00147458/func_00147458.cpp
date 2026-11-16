#include "types.h"

extern "C" void func_001474B0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031C158[];
extern int D_004B1900;
extern int D_004B1940;

extern "C" void *func_00147458(void) {
    if (D_004B1940 == 0) {
        func_001474B0();
        func_0027C3E8(&D_004B1940, D_0031C158, &D_004B1900);
    }
    return &D_004B1940;
}
