#include "types.h"

extern "C" void func_001D8128();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00323D80[];
extern int D_004B2810;

extern int D_004B1C60;

extern "C" void *func_0016C210(void) {
    if (D_004B1C60 == 0) {
        func_001D8128();
        func_0027C3E8(&D_004B1C60, D_00323D80, &D_004B2810);
    }
    return &D_004B1C60;
}
