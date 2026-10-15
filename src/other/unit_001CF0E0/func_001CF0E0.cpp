typedef unsigned int u32;

extern "C" void func_001BBA48();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00337470[];
extern int D_004B2500;
extern int D_004B26B0;

extern "C" void *func_001CF0E0(void) {
    if (D_004B26B0 == 0) {
        func_001BBA48();
        func_0027C3E8(&D_004B26B0, D_00337470, &D_004B2500);
    }
    return &D_004B26B0;
}
