#include "types.h"

extern "C" void func_002382F0();
extern "C" void func_00125B00();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_00316438[];
extern char D_00316448[];

extern s32 D_004B1230;

extern "C" void *func_00133E30(void) {
    if (D_004B1230 == 0) {
        func_002382F0();
        func_00125B00();
        func_0027C3C0(&D_004B1230, D_00316438, D_00316448, 2);
    }
    return &D_004B1230;
}
