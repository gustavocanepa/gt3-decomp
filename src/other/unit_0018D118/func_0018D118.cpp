#include "types.h"

extern "C" void func_00187E90();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032CE90[];
extern int D_004B1FE0;

extern int D_004B20C0;

extern "C" void *func_0018D118(void) {
    if (D_004B20C0 == 0) {
        func_00187E90();
        func_0027C3E8(&D_004B20C0, D_0032CE90, &D_004B1FE0);
    }
    return &D_004B20C0;
}
