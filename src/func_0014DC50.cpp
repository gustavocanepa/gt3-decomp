typedef unsigned int u32;

extern "C" void func_001BA920();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0031CFF8[];
extern int D_004B24E0;

extern int D_004B19C0;

extern "C" void *func_0014DC50(void) {
    if (D_004B19C0 == 0) {
        func_001BA920();
        func_0027C3E8(&D_004B19C0, D_0031CFF8, &D_004B24E0);
    }
    return &D_004B19C0;
}
