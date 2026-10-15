typedef unsigned int u32;

extern "C" void func_00195AF8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032F4E0[];
extern int D_004B11D0;

extern int D_004B2300;

extern "C" void *func_0019D198(void) {
    if (D_004B2300 == 0) {
        func_00195AF8();
        func_0027C3E8(&D_004B2300, D_0032F4E0, &D_004B11D0);
    }
    return &D_004B2300;
}
