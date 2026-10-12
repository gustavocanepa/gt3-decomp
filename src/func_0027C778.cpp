typedef unsigned int u32;

extern "C" void func_0027C800();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003484F0[];
extern int D_004B2B70;
extern int D_004B2B80;

extern "C" void *func_0027C778(void) {
    if (D_004B2B80 == 0) {
        func_0027C800();
        func_0027C3E8(&D_004B2B80, D_003484F0, &D_004B2B70);
    }
    return &D_004B2B80;
}
