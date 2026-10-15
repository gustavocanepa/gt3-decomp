typedef unsigned int u32;

extern "C" void func_001817A8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003286B0[];
extern int D_004B1ED0;
extern int D_004B1EC0;

extern "C" void *func_00181710(void) {
    if (D_004B1EC0 == 0) {
        func_001817A8();
        func_0027C3E8(&D_004B1EC0, D_003286B0, &D_004B1ED0);
    }
    return &D_004B1EC0;
}
