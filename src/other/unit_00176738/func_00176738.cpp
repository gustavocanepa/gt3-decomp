typedef unsigned int u32;

extern "C" void func_00175318();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00327198[];
extern int D_004B1DF0;
extern int D_004B1E60;

extern "C" void *func_00176738(void) {
    if (D_004B1E60 == 0) {
        func_00175318();
        func_0027C3E8(&D_004B1E60, D_00327198, &D_004B1DF0);
    }
    return &D_004B1E60;
}
