typedef unsigned int u32;

extern "C" void func_002013C8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0033E4E0[];
extern int D_004B28C0;
extern int D_004B28D0;

extern "C" void *func_00202A70(void) {
    if (D_004B28D0 == 0) {
        func_002013C8();
        func_0027C3E8(&D_004B28D0, D_0033E4E0, &D_004B28C0);
    }
    return &D_004B28D0;
}
