#include "types.h"

extern "C" void func_00190880();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032E4E0[];
extern int D_004B2180;
extern int D_004B21C0;

extern "C" void *func_00195738(void) {
    if (D_004B21C0 == 0) {
        func_00190880();
        func_0027C3E8(&D_004B21C0, D_0032E4E0, &D_004B2180);
    }
    return &D_004B21C0;
}
