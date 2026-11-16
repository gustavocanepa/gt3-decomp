#include "types.h"

extern "C" void func_001B4850();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_00333270[];
extern char D_00352538[];

extern s32 D_004B24B0;

extern "C" void *func_001B5DC0(void) {
    if (D_004B24B0 == 0) {
        func_001B4850();
        func_0027C3C0(&D_004B24B0, D_00333270, D_00352538, 1);
    }
    return &D_004B24B0;
}
