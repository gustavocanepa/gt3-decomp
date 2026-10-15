typedef unsigned int u32;

extern "C" void func_001CA460();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_0030E288[];
extern int D_00350FD0;

extern int D_004B1530;

extern "C" void *func_00116C90(void) {
    if (D_004B1530 == 0) {
        func_001CA460();
        func_0027C3C0(&D_004B1530, D_0030E288, &D_00350FD0, 1);
    }
    return &D_004B1530;
}
