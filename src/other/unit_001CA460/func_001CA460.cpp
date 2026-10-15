typedef unsigned int u32;

extern "C" void func_001CA4C0();
extern "C" void func_001D19A0();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, u32 a3);

extern char D_00336C88[];
extern char D_00336CA8[];

extern int D_004B2650;

extern "C" void *func_001CA460(void) {
    if (D_004B2650 == 0) {
        func_001CA4C0();
        func_001D19A0();
        func_0027C3C0(&D_004B2650, D_00336C88, D_00336CA8, 2);
    }
    return &D_004B2650;
}
