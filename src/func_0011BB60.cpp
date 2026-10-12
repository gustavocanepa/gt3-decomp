typedef int s32;

extern "C" void func_001CA460();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_0030FD20[];
extern char D_00351090[];

extern s32 D_004B15B0;

extern "C" void *func_0011BB60(void) {
    if (D_004B15B0 == 0) {
        func_001CA460();
        func_0027C3C0(&D_004B15B0, D_0030FD20, D_00351090, 1);
    }
    return &D_004B15B0;
}
