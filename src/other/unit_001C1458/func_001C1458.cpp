#include "types.h"

extern "C" void func_001B4850();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_00334FD0[];
extern char D_003525F8[];

extern s32 D_004B2580;

extern "C" void *func_001C1458(void) {
    if (D_004B2580 == 0) {
        func_001B4850();
        func_0027C3C0(&D_004B2580, D_00334FD0, D_003525F8, 1);
    }
    return &D_004B2580;
}
