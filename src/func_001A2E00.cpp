typedef unsigned int u32;

extern "C" void func_001A2E78();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00330170[];
extern int D_004B12D0;
extern int D_004B1210;

extern "C" void *func_001A2E00(void) {
    if (D_004B1210 == 0) {
        func_001A2E78();
        func_0027C3E8(&D_004B1210, D_00330170, &D_004B12D0);
    }
    return &D_004B1210;
}
