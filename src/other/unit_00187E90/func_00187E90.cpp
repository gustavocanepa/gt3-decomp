#include "types.h"

extern "C" void func_001817A8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032B000[];
extern int D_004B1ED0;

extern int D_004B1FE0;

extern "C" void *func_00187E90(void) {
    if (D_004B1FE0 == 0) {
        func_001817A8();
        func_0027C3E8(&D_004B1FE0, D_0032B000, &D_004B1ED0);
    }
    return &D_004B1FE0;
}
