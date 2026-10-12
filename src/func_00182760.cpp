typedef unsigned int u32;

extern "C" void func_001827B0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00328F78[];
extern int D_004B1F00;
extern int D_004B1F20;

extern "C" void *func_00182760(void) {
    if (D_004B1F20 == 0) {
        func_001827B0();
        func_0027C3E8(&D_004B1F20, D_00328F78, &D_004B1F00);
    }
    return &D_004B1F20;
}
