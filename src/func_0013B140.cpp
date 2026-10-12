typedef unsigned int u32;

extern "C" void func_0013A7C8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00318BE0[];
extern int D_004B1670;

extern int D_004B16E0;

extern "C" void *func_0013B140(void) {
    if (D_004B16E0 == 0) {
        func_0013A7C8();
        func_0027C3E8(&D_004B16E0, D_00318BE0, &D_004B1670);
    }
    return &D_004B16E0;
}
