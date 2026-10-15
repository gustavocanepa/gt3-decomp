typedef unsigned int u32;

extern "C" void func_00190880();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0033D8C0[];
extern int D_004B2180;
extern int D_004B2170;

extern "C" void *func_001F26F8(void) {
    if (D_004B2170 == 0) {
        func_00190880();
        func_0027C3E8(&D_004B2170, D_0033D8C0, &D_004B2180);
    }
    return &D_004B2170;
}
