typedef unsigned int u32;

extern "C" void func_00202F10();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0033E6F0[];
extern int D_004B28E0;

extern int D_004B28F0;

extern "C" void *func_00203180(void) {
    if (D_004B28F0 == 0) {
        func_00202F10();
        func_0027C3E8(&D_004B28F0, D_0033E6F0, &D_004B28E0);
    }
    return &D_004B28F0;
}
