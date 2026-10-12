typedef unsigned int u32;

extern "C" void func_001CA460();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_00332F28[];
extern int D_00352520;

extern int D_004B2460;

extern "C" void *func_001B5430(void) {
    if (D_004B2460 == 0) {
        func_001CA460();
        func_0027C3C0(&D_004B2460, D_00332F28, &D_00352520, 1);
    }
    return &D_004B2460;
}
