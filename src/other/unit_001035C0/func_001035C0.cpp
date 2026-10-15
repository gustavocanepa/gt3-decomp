typedef unsigned int u32;

extern "C" void func_00103640();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00309398[];
extern int D_004B1470;
extern int D_004B1460;

extern "C" void *func_001035C0(void) {
    if (D_004B1460 == 0) {
        func_00103640();
        func_0027C3E8(&D_004B1460, D_00309398, &D_004B1470);
    }
    return &D_004B1460;
}
