#include "types.h"

extern "C" void func_001CA460();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_0030BAC8[];
extern int D_00350E90;

extern int D_004B14D0;

extern "C" void *func_0010F868(void) {
    if (D_004B14D0 == 0) {
        func_001CA460();
        func_0027C3C0(&D_004B14D0, D_0030BAC8, &D_00350E90, 1);
    }
    return &D_004B14D0;
}
