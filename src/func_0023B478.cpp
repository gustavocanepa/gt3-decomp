typedef unsigned int u32;

extern "C" void func_0023B4F0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00342950[];
extern int D_004B1370;

extern int D_004B1280;

extern "C" void *func_0023B478(void) {
    if (D_004B1280 == 0) {
        func_0023B4F0();
        func_0027C3E8(&D_004B1280, D_00342950, &D_004B1370);
    }
    return &D_004B1280;
}
