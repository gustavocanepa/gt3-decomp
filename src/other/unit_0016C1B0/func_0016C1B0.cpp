typedef unsigned int u32;

extern "C" void func_001D5B38();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00323D60[];
extern int D_004B27F0;
extern int D_004B1C40;

extern "C" void *func_0016C1B0(void) {
    if (D_004B1C40 == 0) {
        func_001D5B38();
        func_0027C3E8(&D_004B1C40, D_00323D60, &D_004B27F0);
    }
    return &D_004B1C40;
}
