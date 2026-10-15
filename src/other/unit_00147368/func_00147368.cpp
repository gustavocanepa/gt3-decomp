typedef unsigned int u32;

extern "C" void func_001477D0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031C130[];
extern int D_004B1910;

extern int D_004B18A0;

extern "C" void *func_00147368(void) {
    if (D_004B18A0 == 0) {
        func_001477D0();
        func_0027C3E8(&D_004B18A0, D_0031C130, &D_004B1910);
    }
    return &D_004B18A0;
}
