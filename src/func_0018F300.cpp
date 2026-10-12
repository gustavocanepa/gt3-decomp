typedef unsigned int u32;

extern "C" void func_00182060();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032D760[];
extern int D_004B1EF0;
extern int D_004B2130;

extern "C" void *func_0018F300(void) {
    if (D_004B2130 == 0) {
        func_00182060();
        func_0027C3E8(&D_004B2130, D_0032D760, &D_004B1EF0);
    }
    return &D_004B2130;
}
