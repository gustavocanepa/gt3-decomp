typedef unsigned int u32;

extern "C" void func_001477D0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031C1A0[];
extern int D_004B1910;

extern int D_004B18C0;

extern "C" void *func_00147650(void) {
    if (D_004B18C0 == 0) {
        func_001477D0();
        func_0027C3E8(&D_004B18C0, D_0031C1A0, &D_004B1910);
    }
    return &D_004B18C0;
}
