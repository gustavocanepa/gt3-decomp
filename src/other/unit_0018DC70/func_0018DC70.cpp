typedef unsigned int u32;

extern "C" void func_0018DCC0();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032D470[];
extern int D_004B20E0;

extern int D_004B2110;

extern "C" void *func_0018DC70(void) {
    if (D_004B2110 == 0) {
        func_0018DCC0();
        func_0027C3E8(&D_004B2110, D_0032D470, &D_004B20E0);
    }
    return &D_004B2110;
}
