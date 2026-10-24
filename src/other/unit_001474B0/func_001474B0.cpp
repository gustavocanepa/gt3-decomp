#include "types.h"

extern "C" void func_001477D0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031C180[];
extern int D_004B1900;
extern int D_004B1910;

extern "C" void *func_001474B0(void) {
    if (D_004B1900 == 0) {
        func_001477D0();
        func_0027C3E8(&D_004B1900, D_0031C180, &D_004B1910);
    }
    return &D_004B1900;
}
