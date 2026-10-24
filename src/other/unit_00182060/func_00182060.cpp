#include "types.h"

extern "C" void func_00181710();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00328A18[];
extern int D_004B1EC0;
extern int D_004B1EF0;

extern "C" void *func_00182060(void) {
    if (D_004B1EF0 == 0) {
        func_00181710();
        func_0027C3E8(&D_004B1EF0, D_00328A18, &D_004B1EC0);
    }
    return &D_004B1EF0;
}
