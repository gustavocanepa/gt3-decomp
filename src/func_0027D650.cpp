typedef unsigned int u32;

extern "C" void func_0027C9E0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003486B8[];
extern int D_00353518;

extern int D_004B2C00;

extern "C" void *func_0027D650(void) {
    if (D_004B2C00 == 0) {
        func_0027C9E0();
        func_0027C3E8(&D_004B2C00, D_003486B8, &D_00353518);
    }
    return &D_004B2C00;
}
