typedef unsigned int u32;

extern "C" void func_001D5BC0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00338100[];
extern int D_004B2730;
extern int D_004B2750;

extern "C" void *func_001D3F20(void) {
    if (D_004B2730 == 0) {
        func_001D5BC0();
        func_0027C3E8(&D_004B2730, D_00338100, &D_004B2750);
    }
    return &D_004B2730;
}
