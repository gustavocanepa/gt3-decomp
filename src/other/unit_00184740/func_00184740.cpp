typedef unsigned int u32;

extern "C" void func_00184790();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032A0A8[];
extern int D_004B1240;

extern int D_004B1F60;

extern "C" void *func_00184740(void) {
    if (D_004B1F60 == 0) {
        func_00184790();
        func_0027C3E8(&D_004B1F60, D_0032A0A8, &D_004B1240);
    }
    return &D_004B1F60;
}
