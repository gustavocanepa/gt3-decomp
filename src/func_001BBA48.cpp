typedef unsigned int u32;

extern "C" void func_001D19A0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003342E8[];
extern int D_004B26F0;
extern int D_004B2500;

extern "C" void *func_001BBA48(void) {
    if (D_004B2500 == 0) {
        func_001D19A0();
        func_0027C3E8(&D_004B2500, D_003342E8, &D_004B26F0);
    }
    return &D_004B2500;
}
