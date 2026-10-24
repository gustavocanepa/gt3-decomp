#include "types.h"

extern "C" void func_00204780();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0033EB50[];
extern int D_004B2910;
extern int D_004B2930;

extern "C" void *func_00204E58(void) {
    if (D_004B2930 == 0) {
        func_00204780();
        func_0027C3E8(&D_004B2930, D_0033EB50, &D_004B2910);
    }
    return &D_004B2930;
}
