typedef unsigned int u32;

extern "C" void func_001D8128();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00324AC0[];
extern int D_004B2810;

extern int D_004B1CF0;

extern "C" void *func_001717A8(void) {
    if (D_004B1CF0 == 0) {
        func_001D8128();
        func_0027C3E8(&D_004B1CF0, D_00324AC0, &D_004B2810);
    }
    return &D_004B1CF0;
}
