typedef unsigned int u32;

extern "C" void func_00190880();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032E4C0[];
extern int D_004B2180;
extern int D_004B2190;

extern "C" void *func_001956E0(void) {
    if (D_004B2190 == 0) {
        func_00190880();
        func_0027C3E8(&D_004B2190, D_0032E4C0, &D_004B2180);
    }
    return &D_004B2190;
}
