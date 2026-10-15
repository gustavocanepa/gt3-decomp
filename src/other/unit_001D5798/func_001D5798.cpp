typedef unsigned int u32;

extern "C" void func_001D5838();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00338E40[];
extern int D_004B2740;
extern int D_004B2780;

extern "C" void *func_001D5798(void) {
    if (D_004B2740 == 0) {
        func_001D5838();
        func_0027C3E8(&D_004B2740, D_00338E40, &D_004B2780);
    }
    return &D_004B2740;
}
