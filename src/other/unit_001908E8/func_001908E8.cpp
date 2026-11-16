#include "types.h"

extern "C" void func_00190950();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032DF20[];
extern int D_004B2150;
extern int D_004B21B0;

extern "C" void *func_001908E8(void) {
    if (D_004B21B0 == 0) {
        func_00190950();
        func_0027C3E8(&D_004B21B0, D_0032DF20, &D_004B2150);
    }
    return &D_004B21B0;
}
