typedef unsigned int u32;

extern "C" void func_0021A8B0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00340928[];
extern int D_004B1330;
extern int D_004B11F0;

extern "C" void *func_0021A838(void) {
    if (D_004B11F0 == 0) {
        func_0021A8B0();
        func_0027C3E8(&D_004B11F0, D_00340928, &D_004B1330);
    }
    return &D_004B11F0;
}
