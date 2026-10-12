typedef unsigned int u32;

extern "C" void func_00184858();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032A0D8[];
extern int D_004B1380;

extern int D_004B1F70;

extern "C" void *func_00184808(void) {
    if (D_004B1F70 == 0) {
        func_00184858();
        func_0027C3E8(&D_004B1F70, D_0032A0D8, &D_004B1380);
    }
    return &D_004B1F70;
}
