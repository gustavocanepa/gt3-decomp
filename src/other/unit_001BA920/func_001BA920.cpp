typedef unsigned int u32;

extern "C" void func_001CFA10();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00333EB0[];
extern int D_004B26C0;

extern int D_004B24E0;

extern "C" void *func_001BA920(void) {
    if (D_004B24E0 == 0) {
        func_001CFA10();
        func_0027C3E8(&D_004B24E0, D_00333EB0, &D_004B26C0);
    }
    return &D_004B24E0;
}
