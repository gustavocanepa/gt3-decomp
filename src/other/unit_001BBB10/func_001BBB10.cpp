#include "types.h"

extern "C" void func_001BBBC8();
extern "C" void func_001BBC18();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_00334360[];
extern char D_00334380[];

extern int D_004B1300;

extern "C" void *func_001BBB10(void) {
    if (D_004B1300 == 0) {
        func_001BBBC8();
        func_001BBC18();
        func_0027C3C0(&D_004B1300, D_00334360, D_00334380, 2);
    }
    return &D_004B1300;
}
