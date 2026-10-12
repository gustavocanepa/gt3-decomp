typedef unsigned int u32;

extern "C" void func_00175EC8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003266E8[];
extern int D_004B1E10;
extern int D_004B1E20;

extern "C" void *func_00176180(void) {
    if (D_004B1E20 == 0) {
        func_00175EC8();
        func_0027C3E8(&D_004B1E20, D_003266E8, &D_004B1E10);
    }
    return &D_004B1E20;
}
