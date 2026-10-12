typedef unsigned int u32;

extern "C" void func_001BA920();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00313840[];
extern int D_004B24E0;
extern int D_004B1650;

extern "C" void *func_00129098(void) {
    if (D_004B1650 == 0) {
        func_001BA920();
        func_0027C3E8(&D_004B1650, D_00313840, &D_004B24E0);
    }
    return &D_004B1650;
}
