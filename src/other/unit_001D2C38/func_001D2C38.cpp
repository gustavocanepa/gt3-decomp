typedef unsigned int u32;

extern "C" void func_001D29A0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00337C08[];
extern int D_004B2700;
extern int D_004B2710;

extern "C" void *func_001D2C38(void) {
    if (D_004B2710 == 0) {
        func_001D29A0();
        func_0027C3E8(&D_004B2710, D_00337C08, &D_004B2700);
    }
    return &D_004B2710;
}
