typedef unsigned int u32;

extern "C" void func_0013A038();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003182F0[];
extern int D_004B17D0;

extern int D_004B17C0;

extern "C" void *func_00139E20(void) {
    if (D_004B17C0 == 0) {
        func_0013A038();
        func_0027C3E8(&D_004B17C0, D_003182F0, &D_004B17D0);
    }
    return &D_004B17C0;
}
