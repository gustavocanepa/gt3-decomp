#include "types.h"

extern "C" void func_001CA460();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_00333248[];
extern int D_00352530;
extern int D_004B24A0;

extern "C" void *func_001B5CF8(void) {
    if (D_004B24A0 == 0) {
        func_001CA460();
        func_0027C3C0(&D_004B24A0, D_00333248, &D_00352530, 1);
    }
    return &D_004B24A0;
}
