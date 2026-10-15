typedef unsigned int u32;

extern "C" void func_00151868();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031E0C0[];
extern int D_004B1A60;
extern int D_004B1A80;

extern "C" void *func_00151798(void) {
    if (D_004B1A80 == 0) {
        func_00151868();
        func_0027C3E8(&D_004B1A80, D_0031E0C0, &D_004B1A60);
    }
    return &D_004B1A80;
}
