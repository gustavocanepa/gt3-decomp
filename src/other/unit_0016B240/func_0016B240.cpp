typedef unsigned int u32;

extern "C" void func_001D5AE8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00323738[];
extern int D_004B27B0;
extern int D_004B1C30;

extern "C" void *func_0016B240(void) {
    if (D_004B1C30 == 0) {
        func_001D5AE8();
        func_0027C3E8(&D_004B1C30, D_00323738, &D_004B27B0);
    }
    return &D_004B1C30;
}
