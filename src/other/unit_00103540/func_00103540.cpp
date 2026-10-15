typedef unsigned int u32;

extern "C" void func_00103640();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00309378[];
extern int D_004B1470;
extern int D_004B1450;

extern "C" void *func_00103540(void) {
    if (D_004B1450 == 0) {
        func_00103640();
        func_0027C3E8(&D_004B1450, D_00309378, &D_004B1470);
    }
    return &D_004B1450;
}
