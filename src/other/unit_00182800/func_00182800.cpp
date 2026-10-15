typedef unsigned int u32;

extern "C" void func_001820C8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00328FA0[];
extern int D_004B1EE0;

extern int D_004B1F10;

extern "C" void *func_00182800(void) {
    if (D_004B1F10 == 0) {
        func_001820C8();
        func_0027C3E8(&D_004B1F10, D_00328FA0, &D_004B1EE0);
    }
    return &D_004B1F10;
}
