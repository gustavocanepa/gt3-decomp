typedef unsigned int u32;

extern "C" void func_001BBA48();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0030B000[];
extern int D_004B2500;

extern int D_004B1490;

extern "C" void *func_0010C948(void) {
    if (D_004B1490 == 0) {
        func_001BBA48();
        func_0027C3E8(&D_004B1490, D_0030B000, &D_004B2500);
    }
    return &D_004B1490;
}
