#include "types.h"

extern "C" void func_001B4850();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_00334658[];
extern int D_003525E0;
extern int D_004B2510;

extern "C" void *func_001BF2B8(void) {
    if (D_004B2510 == 0) {
        func_001B4850();
        func_0027C3C0(&D_004B2510, D_00334658, &D_003525E0, 1);
    }
    return &D_004B2510;
}
