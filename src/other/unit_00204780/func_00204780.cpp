#include "types.h"

extern "C" void func_001FECE8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0033E918[];
extern int D_004B28B0;

extern int D_004B2910;

extern "C" void *func_00204780(void) {
    if (D_004B2910 == 0) {
        func_001FECE8();
        func_0027C3E8(&D_004B2910, D_0033E918, &D_004B28B0);
    }
    return &D_004B2910;
}
