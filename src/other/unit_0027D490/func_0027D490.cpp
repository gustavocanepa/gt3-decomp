#include "types.h"

extern "C" void func_0027C9E0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00348658[];
extern int D_00353518;

extern int D_004B2BD0;

extern "C" void *func_0027D490(void) {
    if (D_004B2BD0 == 0) {
        func_0027C9E0();
        func_0027C3E8(&D_004B2BD0, D_00348658, &D_00353518);
    }
    return &D_004B2BD0;
}
