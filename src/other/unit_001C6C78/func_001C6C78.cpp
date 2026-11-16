#include "types.h"

extern "C" void func_001B4850();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_00336878[];
extern int D_003526C0;
extern int D_004B2630;

extern "C" void *func_001C6C78(void) {
    if (D_004B2630 == 0) {
        func_001B4850();
        func_0027C3C0(&D_004B2630, D_00336878, &D_003526C0, 1);
    }
    return &D_004B2630;
}
