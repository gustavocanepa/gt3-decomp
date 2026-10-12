typedef unsigned int u32;

extern "C" void func_001B2660();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00332060[];
extern int D_004B2420;

extern int D_004B12F0;

extern "C" void *func_001B24D8(void) {
    if (D_004B12F0 == 0) {
        func_001B2660();
        func_0027C3E8(&D_004B12F0, D_00332060, &D_004B2420);
    }
    return &D_004B12F0;
}
