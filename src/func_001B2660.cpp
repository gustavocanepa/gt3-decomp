typedef unsigned int u32;

extern "C" void func_001A2E78();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00332088[];
extern int D_004B12D0;
extern int D_004B2420;

extern "C" void *func_001B2660(void) {
    if (D_004B2420 == 0) {
        func_001A2E78();
        func_0027C3E8(&D_004B2420, D_00332088, &D_004B12D0);
    }
    return &D_004B2420;
}
