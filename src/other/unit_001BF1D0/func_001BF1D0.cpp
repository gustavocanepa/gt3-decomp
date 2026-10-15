typedef unsigned int u32;

extern "C" void func_001CA460();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_00334638[];
extern int D_003525D8;

extern int D_004B2520;

extern "C" void *func_001BF1D0(void) {
    if (D_004B2520 == 0) {
        func_001CA460();
        func_0027C3C0(&D_004B2520, D_00334638, &D_003525D8, 1);
    }
    return &D_004B2520;
}
