typedef unsigned int u32;

extern "C" void func_0020FF98();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00319338[];
extern int D_004B2970;

extern int D_004B1820;

extern "C" void *func_0013C880(void) {
    if (D_004B1820 == 0) {
        func_0020FF98();
        func_0027C3E8(&D_004B1820, D_00319338, &D_004B2970);
    }
    return &D_004B1820;
}
