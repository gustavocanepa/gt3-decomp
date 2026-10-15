typedef unsigned int u32;

extern "C" void func_001D8128();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_00324B08[];
extern int D_004B2810;
extern int D_004B1CE0;

extern "C" void *func_00171850(void) {
    if (D_004B1CE0 == 0) {
        func_001D8128();
        func_0027C3E8(&D_004B1CE0, D_00324B08, &D_004B2810);
    }
    return &D_004B1CE0;
}
