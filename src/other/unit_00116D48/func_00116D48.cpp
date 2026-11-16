#include "types.h"

extern "C" void func_001B4850();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_0030E2A8[];
extern char D_00350FD8[];

extern s32 D_004B1540;

extern "C" void *func_00116D48(void) {
    if (D_004B1540 == 0) {
        func_001B4850();
        func_0027C3C0(&D_004B1540, D_0030E2A8, D_00350FD8, 1);
    }
    return &D_004B1540;
}
