#include "types.h"

extern "C" void func_001D8128();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00323D48[];
extern int D_004B2810;

extern int D_004B1C50;

extern "C" void *func_0016C160(void) {
    if (D_004B1C50 == 0) {
        func_001D8128();
        func_0027C3E8(&D_004B1C50, D_00323D48, &D_004B2810);
    }
    return &D_004B1C50;
}
