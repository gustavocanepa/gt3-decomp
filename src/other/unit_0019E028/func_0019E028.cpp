#include "types.h"

extern "C" void func_0019D118();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032FB28[];
extern int D_004B2310;

extern int D_004B1360;

extern "C" void *func_0019E028(void) {
    if (D_004B1360 == 0) {
        func_0019D118();
        func_0027C3E8(&D_004B1360, D_0032FB28, &D_004B2310);
    }
    return &D_004B1360;
}
