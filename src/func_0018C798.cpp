typedef unsigned int u32;

extern "C" void func_00195978();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032CAA8[];
extern int D_004B21D0;

extern int D_004B20A0;

extern "C" void *func_0018C798(void) {
    if (D_004B20A0 == 0) {
        func_00195978();
        func_0027C3E8(&D_004B20A0, D_0032CAA8, &D_004B21D0);
    }
    return &D_004B20A0;
}
