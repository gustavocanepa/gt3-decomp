typedef unsigned int u32;

extern "C" void func_0017E670();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032B030[];
extern int D_004B1EB0;

extern int D_004B1FD0;

extern "C" void *func_00187F48(void) {
    if (D_004B1FD0 == 0) {
        func_0017E670();
        func_0027C3E8(&D_004B1FD0, D_0032B030, &D_004B1EB0);
    }
    return &D_004B1FD0;
}
