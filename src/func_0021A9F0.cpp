typedef int s32;

extern "C" void func_002382F0();
extern "C" void func_00125B00();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_003409D0[];
extern char D_003409E0[];

extern s32 D_004B1230;

extern "C" void *func_0021A9F0(void) {
    if (D_004B1230 == 0) {
        func_002382F0();
        func_00125B00();
        func_0027C3C0(&D_004B1230, D_003409D0, D_003409E0, 2);
    }
    return &D_004B1230;
}
