typedef unsigned int u32;

extern "C" void func_001A2E00();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00330578[];
extern int D_004B1210;

extern int D_004B1750;

extern "C" void *func_001A3D40(void) {
    if (D_004B1750 == 0) {
        func_001A2E00();
        func_0027C3E8(&D_004B1750, D_00330578, &D_004B1210);
    }
    return &D_004B1750;
}
