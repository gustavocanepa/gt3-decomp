typedef unsigned int u32;

extern "C" void func_00195978();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032B770[];
extern int D_004B21D0;
extern int D_004B2000;

extern "C" void *func_00188E70(void) {
    if (D_004B2000 == 0) {
        func_00195978();
        func_0027C3E8(&D_004B2000, D_0032B770, &D_004B21D0);
    }
    return &D_004B2000;
}
