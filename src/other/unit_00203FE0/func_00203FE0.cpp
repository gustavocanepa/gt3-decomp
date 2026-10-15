typedef unsigned int u32;

extern "C" void func_001FECE8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0033E7F8[];
extern int D_004B28B0;
extern int D_004B2900;

extern "C" void *func_00203FE0(void) {
    if (D_004B2900 == 0) {
        func_001FECE8();
        func_0027C3E8(&D_004B2900, D_0033E7F8, &D_004B28B0);
    }
    return &D_004B2900;
}
