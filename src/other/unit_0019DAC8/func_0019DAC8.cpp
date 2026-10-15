typedef unsigned int u32;

extern "C" void func_0019DD50();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032F8F8[];
extern int D_004B2340;

extern int D_004B11E0;

extern "C" void *func_0019DAC8(void) {
    if (D_004B11E0 == 0) {
        func_0019DD50();
        func_0027C3E8(&D_004B11E0, D_0032F8F8, &D_004B2340);
    }
    return &D_004B11E0;
}
