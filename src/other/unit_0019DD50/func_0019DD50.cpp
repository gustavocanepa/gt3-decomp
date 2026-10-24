#include "types.h"

extern "C" void func_00195AF8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032F928[];
extern int D_004B11D0;

extern int D_004B2340;

extern "C" void *func_0019DD50(void) {
    if (D_004B2340 == 0) {
        func_00195AF8();
        func_0027C3E8(&D_004B2340, D_0032F928, &D_004B11D0);
    }
    return &D_004B2340;
}
