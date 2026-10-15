typedef unsigned int u32;

extern "C" void func_001474B0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031C0C0[];
extern int D_004B1900;

extern int D_004B18E0;

extern "C" void *func_00147120(void) {
    if (D_004B18E0 == 0) {
        func_001474B0();
        func_0027C3E8(&D_004B18E0, D_0031C0C0, &D_004B1900);
    }
    return &D_004B18E0;
}
