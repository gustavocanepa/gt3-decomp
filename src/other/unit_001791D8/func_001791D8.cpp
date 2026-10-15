typedef unsigned int u32;

extern "C" void func_002377C0();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_003273D0[];
extern int D_00351DD8;
extern int D_004B1E70;

extern "C" void *func_001791D8(void) {
    if (D_004B1E70 == 0) {
        func_002377C0();
        func_0027C3C0(&D_004B1E70, D_003273D0, &D_00351DD8, 1);
    }
    return &D_004B1E70;
}
