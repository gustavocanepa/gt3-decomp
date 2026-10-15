typedef unsigned int u32;

extern "C" void func_001537A8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031EBF8[];
extern int D_004B1B70;

extern int D_004B1AA0;

extern "C" void *func_00153568(void) {
    if (D_004B1AA0 == 0) {
        func_001537A8();
        func_0027C3E8(&D_004B1AA0, D_0031EBF8, &D_004B1B70);
    }
    return &D_004B1AA0;
}
