typedef int s32;

extern "C" void func_002382F0();
extern "C" void func_00125B00();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_00311E90[];
extern char D_00311EA0[];

extern char D_004B1230[];

extern "C" void *func_00125A38(void) {
    if (*(volatile s32 *)(D_004B1230) == 0) {
        func_002382F0();
        func_00125B00();
        func_0027C3C0(D_004B1230, D_00311E90, D_00311EA0, 2);
    }
    return D_004B1230;
}
