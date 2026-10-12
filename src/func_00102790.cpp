typedef unsigned int u32;

extern "C" void func_001028F0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00308A98[];
extern int D_004B1410;
extern int D_004B1420;

extern "C" void *func_00102790(void) {
    if (D_004B1420 == 0) {
        func_001028F0();
        func_0027C3E8(&D_004B1420, D_00308A98, &D_004B1410);
    }
    return &D_004B1420;
}
