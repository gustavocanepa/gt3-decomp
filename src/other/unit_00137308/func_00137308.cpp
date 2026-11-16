#include "types.h"

extern "C" void func_002119B0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00316DC0[];
extern int D_004B2990;
extern int D_004B17B0;

extern "C" void *func_00137308(void) {
    if (D_004B17B0 == 0) {
        func_002119B0();
        func_0027C3E8(&D_004B17B0, D_00316DC0, &D_004B2990);
    }
    return &D_004B17B0;
}
