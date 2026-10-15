typedef unsigned int u32;

extern "C" void func_00138BD8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00318700[];
extern int D_004B1670;
extern int D_004B16A0;

extern "C" void *func_0013A7C8(void) {
    if (D_004B1670 == 0) {
        func_00138BD8();
        func_0027C3E8(&D_004B1670, D_00318700, &D_004B16A0);
    }
    return &D_004B1670;
}
