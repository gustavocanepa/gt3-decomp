typedef unsigned int u32;

extern "C" void func_001D8128();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_003236C0[];
extern int D_004B2810;
extern int D_004B1BF0;

extern "C" void *func_0016B0D8(void) {
    if (D_004B1BF0 == 0) {
        func_001D8128();
        func_0027C3E8(&D_004B1BF0, D_003236C0, &D_004B2810);
    }
    return &D_004B1BF0;
}
