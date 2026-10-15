typedef int s32;

extern "C" void func_001517F8();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_0031FE78[];
extern int D_003518C0;

extern int D_004B1BA0;

extern "C" void *func_00159928(void) {
    if (D_004B1BA0 == 0) {
        func_001517F8();
        func_0027C3C0(&D_004B1BA0, D_0031FE78, &D_003518C0, 1);
    }
    return &D_004B1BA0;
}
