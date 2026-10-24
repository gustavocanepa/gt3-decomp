#include "types.h"

extern "C" void func_001D5838();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00338E20[];
extern int D_004B2780;
extern int D_004B27E0;

extern "C" void *func_001D5748(void) {
    if (D_004B27E0 == 0) {
        func_001D5838();
        func_0027C3E8(&D_004B27E0, D_00338E20, &D_004B2780);
    }
    return &D_004B27E0;
}
