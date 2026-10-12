typedef int s32;

extern "C" void func_001B4850();
extern "C" void func_0027C3C0(void *a0, void *a1, void *a2, s32 a3);

extern char D_00335420[];
extern char D_00352608[];

extern char D_004B2590[];

extern "C" void *func_001C1F70(void) {
    if (*(volatile s32 *)(char *)D_004B2590 == 0) {
        func_001B4850();
        func_0027C3C0(D_004B2590, D_00335420, D_00352608, 1);
    }
    return D_004B2590;
}
