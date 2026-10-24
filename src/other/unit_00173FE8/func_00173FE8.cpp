#include "types.h"

extern "C" void func_001CA460();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_00325848[];
extern char D_00351CC0[];

extern s32 D_004B1DA0;

extern "C" void *func_00173FE8(void) {
    if (D_004B1DA0 == 0) {
        func_001CA460();
        func_0027C3C0(&D_004B1DA0, D_00325848, D_00351CC0, 1);
    }
    return &D_004B1DA0;
}
