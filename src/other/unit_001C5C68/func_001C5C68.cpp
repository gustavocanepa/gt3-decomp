#include "types.h"

extern "C" void func_001BA920();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003364A0[];
extern int D_004B24E0;

extern int D_004B2600;

extern "C" void *func_001C5C68(void) {
    if (D_004B2600 == 0) {
        func_001BA920();
        func_0027C3E8(&D_004B2600, D_003364A0, &D_004B24E0);
    }
    return &D_004B2600;
}
