#include "types.h"

extern "C" void func_0017CED8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00327F68[];
extern int D_004B1E80;
extern int D_004B1E90;

extern "C" void *func_0017E518(void) {
    if (D_004B1E90 == 0) {
        func_0017CED8();
        func_0027C3E8(&D_004B1E90, D_00327F68, &D_004B1E80);
    }
    return &D_004B1E90;
}
