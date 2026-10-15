typedef int s32;

extern "C" void func_00231958();
extern "C" void func_00237820();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_003422D0[];
extern char D_003422E0[];

extern char D_004B2A40[];

extern "C" void *func_002377C0(void) {
    if (*(volatile s32 *)(char *)D_004B2A40 == 0) {
        func_00231958();
        func_00237820();
        func_0027C3C0(D_004B2A40, D_003422D0, D_003422E0, 2);
    }
    return D_004B2A40;
}
