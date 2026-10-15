typedef unsigned int u32;

extern "C" void func_001BA920();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00319440[];
extern int D_004B24E0;

extern int D_004B1830;

extern "C" void *func_0013E5A0(void) {
    if (D_004B1830 == 0) {
        func_001BA920();
        func_0027C3E8(&D_004B1830, D_00319440, &D_004B24E0);
    }
    return &D_004B1830;
}
