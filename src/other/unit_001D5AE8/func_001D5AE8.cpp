#include "types.h"

extern "C" void func_001D5BC0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00338F30[];
extern int D_004B2750;
extern int D_004B27B0;

extern "C" void *func_001D5AE8(void) {
    if (D_004B27B0 == 0) {
        func_001D5BC0();
        func_0027C3E8(&D_004B27B0, D_00338F30, &D_004B2750);
    }
    return &D_004B27B0;
}
