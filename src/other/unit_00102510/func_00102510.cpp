typedef unsigned int u32;

extern "C" void func_001028F0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00308A58[];
extern int D_004B1410;

extern int D_004B13E0;

extern "C" void *func_00102510(void) {
    if (D_004B13E0 == 0) {
        func_001028F0();
        func_0027C3E8(&D_004B13E0, D_00308A58, &D_004B1410);
    }
    return &D_004B13E0;
}
