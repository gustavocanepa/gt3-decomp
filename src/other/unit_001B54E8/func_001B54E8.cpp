typedef unsigned int u32;

extern "C" void func_001B4850();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_00332F48[];
extern int D_00352528;

extern int D_004B2480;

extern "C" void *func_001B54E8(void) {
    if (D_004B2480 == 0) {
        func_001B4850();
        func_0027C3C0(&D_004B2480, D_00332F48, &D_00352528, 1);
    }
    return &D_004B2480;
}
