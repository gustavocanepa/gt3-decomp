#include "types.h"

extern "C" void func_001FECE8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0033E330[];
extern int D_004B28B0;
extern int D_004B28C0;

extern "C" void *func_002013C8(void) {
    if (D_004B28C0 == 0) {
        func_001FECE8();
        func_0027C3E8(&D_004B28C0, D_0033E330, &D_004B28B0);
    }
    return &D_004B28C0;
}
