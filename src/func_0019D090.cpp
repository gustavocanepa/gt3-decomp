typedef unsigned int u32;

extern "C" void func_00195AF8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern int D_004B11D0;

extern int D_004B2320;

extern "C" void *func_0019D090(void) {
    if (D_004B2320 == 0) {
        func_00195AF8();
        func_0027C3E8(&D_004B2320, ((char *)"Q26PDISTD10FileDevice"), &D_004B11D0);
    }
    return &D_004B2320;
}
