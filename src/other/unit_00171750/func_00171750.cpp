#include "types.h"

extern "C" void func_001D8128();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00324AA0[];
extern int D_004B2810;

extern int D_004B1C90;

extern "C" void *func_00171750(void) {
    if (D_004B1C90 == 0) {
        func_001D8128();
        func_0027C3E8(&D_004B1C90, D_00324AA0, &D_004B2810);
    }
    return &D_004B1C90;
}
