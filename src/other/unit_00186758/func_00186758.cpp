typedef unsigned int u32;

extern "C" void func_001867A8();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032AA50[];
extern int D_004B1340;

extern int D_004B1F80;

extern "C" void *func_00186758(void) {
    if (D_004B1F80 == 0) {
        func_001867A8();
        func_0027C3E8(&D_004B1F80, D_0032AA50, &D_004B1340);
    }
    return &D_004B1F80;
}
