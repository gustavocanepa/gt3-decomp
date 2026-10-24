#include "types.h"

extern "C" void func_00186918();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032AAB8[];
extern int D_004B1250;

extern int D_004B1FA0;

extern "C" void *func_001868C8(void) {
    if (D_004B1FA0 == 0) {
        func_00186918();
        func_0027C3E8(&D_004B1FA0, D_0032AAB8, &D_004B1250);
    }
    return &D_004B1FA0;
}
