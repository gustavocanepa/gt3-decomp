typedef unsigned int u32;

extern "C" void func_001CB950();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00316E20[];
extern int D_004B2660;

extern int D_004B1790;

extern "C" void *func_00137418(void) {
    if (D_004B1790 == 0) {
        func_001CB950();
        func_0027C3E8(&D_004B1790, D_00316E20, &D_004B2660);
    }
    return &D_004B1790;
}
