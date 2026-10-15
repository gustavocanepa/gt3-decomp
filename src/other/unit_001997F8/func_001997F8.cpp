typedef unsigned int u32;

extern "C" void func_00199E30();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032F040[];
extern int D_004B1260;

extern int D_004B22B0;

extern "C" void *func_001997F8(void) {
    if (D_004B22B0 == 0) {
        func_00199E30();
        func_0027C3E8(&D_004B22B0, D_0032F040, &D_004B1260);
    }
    return &D_004B22B0;
}
