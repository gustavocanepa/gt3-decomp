typedef unsigned int u32;

extern "C" void func_001D5AE8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00338EF8[];
extern int D_004B2760;
extern int D_004B27B0;

extern "C" void *func_001D5978(void) {
    if (D_004B2760 == 0) {
        func_001D5AE8();
        func_0027C3E8(&D_004B2760, D_00338EF8, &D_004B27B0);
    }
    return &D_004B2760;
}
