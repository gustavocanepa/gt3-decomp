/* compiler: ee-gcc2.9-991111 */
typedef int s32;

struct G {
    char pad[0x24];
    s32 f24;
};

extern s32 D_00308268;
extern struct G D_004B1100;
extern char D_004B0F00[];
extern char D_004B1128[];

extern s32 func_00288998(struct G *, s32, s32);
extern s32 func_00288B68(struct G *, s32, s32, s32, s32, char *, s32, s32, s32);

s32 func_0028CA58(int unused0) {
    s32 w;
    s32 r;

    if (D_00308268 < 0) {
        for (;;) {
            r = func_00288998(&D_004B1100, 0x80000006, 0);
            if (r < 0) {
                return -1;
            }
            if (D_004B1100.f24 != 0) {
                D_00308268 = 0;
                if (func_00288B68(&D_004B1100, 0xFF, 0, 0, 0, D_004B0F00, 4, 0, 0) < 0) {
                    return 0xFFFEFFFF;
                }
                __builtin_memcpy(D_004B1128, D_004B0F00, 4);
                return 0;
            }
            w = 0x100000;
            do {
                w = w - 1;
            } while (w != -1);
        }
    }
    return 0;
}
