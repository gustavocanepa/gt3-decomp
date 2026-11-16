#include "types.h"

extern "C" void func_001FECE8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0033EC80[];
extern int D_004B28B0;

extern int D_004B2940;

extern "C" void *func_00205930(void) {
    if (D_004B2940 == 0) {
        func_001FECE8();
        func_0027C3E8(&D_004B2940, D_0033EC80, &D_004B28B0);
    }
    return &D_004B2940;
}
