typedef unsigned int u32;

extern "C" void func_001817A8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032A0C0[];
extern int D_004B1ED0;

extern int D_004B1240;

extern "C" void *func_00184790(void) {
    if (D_004B1240 == 0) {
        func_001817A8();
        func_0027C3E8(&D_004B1240, D_0032A0C0, &D_004B1ED0);
    }
    return &D_004B1240;
}
