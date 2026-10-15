typedef unsigned int u32;

extern "C" void func_001CFA10();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003375F0[];
extern int D_004B26C0;
extern int D_004B26D0;

extern "C" void *func_001CF858(void) {
    if (D_004B26D0 == 0) {
        func_001CFA10();
        func_0027C3E8(&D_004B26D0, D_003375F0, &D_004B26C0);
    }
    return &D_004B26D0;
}
