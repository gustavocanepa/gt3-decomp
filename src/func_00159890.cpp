typedef unsigned int u32;

extern "C" void func_00151798();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031FE58[];
extern int D_004B1A80;

extern int D_004B1BB0;

extern "C" void *func_00159890(void) {
    if (D_004B1BB0 == 0) {
        func_00151798();
        func_0027C3E8(&D_004B1BB0, D_0031FE58, &D_004B1A80);
    }
    return &D_004B1BB0;
}
