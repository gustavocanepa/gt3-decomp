#include "types.h"

extern "C" void func_001B48B0();
extern "C" void func_001BA920();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_00332C60[];
extern char D_00332C78[];

extern char D_004B2450[];

extern "C" void *func_001B4850(void) {
    if (*(volatile s32 *)(D_004B2450) == 0) {
        func_001B48B0();
        func_001BA920();
        func_0027C3C0(D_004B2450, D_00332C60, D_00332C78, 2);
    }
    return D_004B2450;
}
