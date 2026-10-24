#include "types.h"

extern "C" void func_001D5AE8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003236E0[];
extern int D_004B27B0;
extern int D_004B1C10;

extern "C" void *func_0016B148(void) {
    if (D_004B1C10 == 0) {
        func_001D5AE8();
        func_0027C3E8(&D_004B1C10, D_003236E0, &D_004B27B0);
    }
    return &D_004B1C10;
}
