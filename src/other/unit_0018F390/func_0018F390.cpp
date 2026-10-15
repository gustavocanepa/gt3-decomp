typedef unsigned int u32;

extern "C" void func_0018F638();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032D778[];
extern int D_004B2140;
extern int D_004B2120;

extern "C" void *func_0018F390(void) {
    if (D_004B2120 == 0) {
        func_0018F638();
        func_0027C3E8(&D_004B2120, D_0032D778, &D_004B2140);
    }
    return &D_004B2120;
}
