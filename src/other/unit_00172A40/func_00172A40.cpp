typedef unsigned int u32;

extern "C" void func_00172B80();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00324F90[];
extern int D_004B1D50;

extern int D_004B1D10;

extern "C" void *func_00172A40(void) {
    if (D_004B1D10 == 0) {
        func_00172B80();
        func_0027C3E8(&D_004B1D10, D_00324F90, &D_004B1D50);
    }
    return &D_004B1D10;
}
