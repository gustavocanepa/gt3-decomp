#include "types.h"

extern "C" void func_00175EC8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00326CC8[];
extern int D_004B1E10;
extern int D_004B1E40;

extern "C" void *func_001763F8(void) {
    if (D_004B1E40 == 0) {
        func_00175EC8();
        func_0027C3E8(&D_004B1E40, D_00326CC8, &D_004B1E10);
    }
    return &D_004B1E40;
}
