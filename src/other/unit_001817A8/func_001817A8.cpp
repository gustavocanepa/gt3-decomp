#include "types.h"

extern "C" void func_0017E518();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003286D0[];
extern int D_004B1E90;
extern int D_004B1ED0;

extern "C" void *func_001817A8(void) {
    if (D_004B1ED0 == 0) {
        func_0017E518();
        func_0027C3E8(&D_004B1ED0, D_003286D0, &D_004B1E90);
    }
    return &D_004B1ED0;
}
