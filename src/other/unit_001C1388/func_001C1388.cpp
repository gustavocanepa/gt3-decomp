typedef int s32;

extern "C" void func_001CA460();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_00334FB0[];
extern char D_003525F0[];

extern s32 D_004B2570;

extern "C" void *func_001C1388(void) {
    if (D_004B2570 == 0) {
        func_001CA460();
        func_0027C3C0(&D_004B2570, D_00334FB0, D_003525F0, 1);
    }
    return &D_004B2570;
}
