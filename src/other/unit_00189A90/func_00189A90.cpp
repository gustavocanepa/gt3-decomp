#include "types.h"

extern "C" void func_00195978();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032BE90[];
extern int D_004B21D0;

extern int D_004B2040;

extern "C" void *func_00189A90(void) {
    if (D_004B2040 == 0) {
        func_00195978();
        func_0027C3E8(&D_004B2040, D_0032BE90, &D_004B21D0);
    }
    return &D_004B2040;
}
