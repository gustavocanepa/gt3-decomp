#include "types.h"

extern "C" void func_00187E90();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032BB60[];
extern int D_004B1FE0;

extern int D_004B2020;

extern "C" void *func_001898F8(void) {
    if (D_004B2020 == 0) {
        func_00187E90();
        func_0027C3E8(&D_004B2020, D_0032BB60, &D_004B1FE0);
    }
    return &D_004B2020;
}
