typedef unsigned int u32;

extern "C" void func_00147268();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031C0E0[];
extern int D_004B1950;

extern int D_004B18F0;

extern "C" void *func_00147170(void) {
    if (D_004B18F0 == 0) {
        func_00147268();
        func_0027C3E8(&D_004B18F0, D_0031C0E0, &D_004B1950);
    }
    return &D_004B18F0;
}
