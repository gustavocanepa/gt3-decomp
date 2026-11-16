#include "types.h"

extern "C" void func_001A3CF0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032C228[];
extern int D_004B2380;

extern int D_004B1760;

extern "C" void *func_0018A078(void) {
    if (D_004B1760 == 0) {
        func_001A3CF0();
        func_0027C3E8(&D_004B1760, D_0032C228, &D_004B2380);
    }
    return &D_004B1760;
}
