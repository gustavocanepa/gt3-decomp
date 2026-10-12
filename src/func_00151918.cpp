typedef int s32;

extern "C" void func_00151978();
extern "C" void func_001519D8();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_0031E138[];
extern char D_0031E158[];

extern s32 D_004B1A90;

extern "C" void *func_00151918(void) {
    if (D_004B1A90 == 0) {
        func_00151978();
        func_001519D8();
        func_0027C3C0(&D_004B1A90, D_0031E138, D_0031E158, 2);
    }
    return &D_004B1A90;
}
