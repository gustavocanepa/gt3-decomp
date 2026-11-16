#include "types.h"

extern "C" void func_00182800();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00329470[];
extern int D_004B1F10;

extern int D_004B1F30;

extern "C" void *func_00182E08(void) {
    if (D_004B1F30 == 0) {
        func_00182800();
        func_0027C3E8(&D_004B1F30, D_00329470, &D_004B1F10);
    }
    return &D_004B1F30;
}
