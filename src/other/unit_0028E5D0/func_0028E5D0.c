/* compiler: ee-gcc2.9-991111 */
struct D { short s0; short s2; short s4; short s6; int w8; int wc; };
extern struct D *func_0028E5C0(void);
extern void func_00285860(int, int, int);
extern void func_00285960(int, int);
extern int func_00285FA0(int);
extern int func_00286688(int);
#define CSR (*(volatile unsigned long *)0x12001000)

void func_0028E5D0(short mode, short a1, short a2, short a3) {
    struct D *d;
    switch (mode) {
    case 0:
        d = func_0028E5C0();
        CSR = 0x200;
        d->s0 = a1;
        d->s2 = a2;
        d->s6 = (CSR >> 16) & 0xFF;
        func_00285FA0(0xFF00);
        d->s4 = (a3 != 0);
        if (d->w8 != 0) {
            func_00286688(2);
            func_00285960(2, d->wc);
            d->w8 = 0;
            d->wc = 0;
        }
        return func_00285860(a1 & 1, a2 & 0xFF, a3 & 1);
    case 1:
        CSR = 0x100;
        return;
    case 5:
        d = func_0028E5C0();
        d->s4 = (a3 != 0);
        d->s0 = a1;
        d->s2 = a2;
        d->s6 = (CSR >> 16) & 0xFF;
        return func_00285860(a1 & 1, a2 & 0xFF, a3 & 1);
    default:
        return;
    }
}
