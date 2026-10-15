/* compiler: ee-gcc2.9-991111 */
typedef int s32;

extern s32 D_003081BC;
extern char D_004ADE40[];

/* Caller sets both $a0 (buffer) and $a1 (count) before each call. */
extern "C" void func_0028D930(char *p, s32 n);

extern "C" void func_002872A0(s32 arg0) {
    s32 n = D_003081BC;
    if (n >= 0x7E) {
        D_003081BC = 0;
        D_004ADE40[0x7F] = 0;
        func_0028D930(D_004ADE40, n);
        n = D_003081BC;
    }
    if (arg0 == 0xA) {
        D_003081BC = 0;
        D_004ADE40[n] = (char)arg0;
        D_004ADE40[n + 1] = 0;
        func_0028D930(D_004ADE40, n);
        return;
    }
    D_003081BC = n + 1;
    D_004ADE40[n] = (char)arg0;
}
