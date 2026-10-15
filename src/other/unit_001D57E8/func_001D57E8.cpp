typedef unsigned int u32;

extern "C" void func_001D5838();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00338E60[];
extern int D_004B2780;
extern int D_004B27A0;

extern "C" void *func_001D57E8(void) {
    if (D_004B27A0 == 0) {
        func_001D5838();
        func_0027C3E8(&D_004B27A0, D_00338E60, &D_004B2780);
    }
    return &D_004B27A0;
}
