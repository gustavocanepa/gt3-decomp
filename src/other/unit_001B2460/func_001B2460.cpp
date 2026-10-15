typedef unsigned int u32;

extern "C" void func_001B2660();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00332050[];
extern int D_004B2420;
extern int D_004B2410;

extern "C" void *func_001B2460(void) {
    if (D_004B2410 == 0) {
        func_001B2660();
        func_0027C3E8(&D_004B2410, D_00332050, &D_004B2420);
    }
    return &D_004B2410;
}
