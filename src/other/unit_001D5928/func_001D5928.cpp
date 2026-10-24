#include "types.h"

extern "C" void func_001D5978();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00338ED8[];
extern int D_004B2760;
extern int D_004B27C0;

extern "C" void *func_001D5928(void) {
    if (D_004B27C0 == 0) {
        func_001D5978();
        func_0027C3E8(&D_004B27C0, D_00338ED8, &D_004B2760);
    }
    return &D_004B27C0;
}
