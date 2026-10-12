typedef unsigned int u32;

extern "C" void func_001D5AE8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00338E80[];
extern int D_004B2780;
extern int D_004B27B0;

extern "C" void *func_001D5838(void) {
    if (D_004B2780 == 0) {
        func_001D5AE8();
        func_0027C3E8(&D_004B2780, D_00338E80, &D_004B27B0);
    }
    return &D_004B2780;
}
