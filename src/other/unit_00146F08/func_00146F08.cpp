typedef unsigned int u32;

extern "C" void func_00147120();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031C070[];
extern int D_004B18D0;
extern int D_004B18E0;

extern "C" void *func_00146F08(void) {
    if (D_004B18D0 == 0) {
        func_00147120();
        func_0027C3E8(&D_004B18D0, D_0031C070, &D_004B18E0);
    }
    return &D_004B18D0;
}
