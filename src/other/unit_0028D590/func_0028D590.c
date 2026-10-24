/* compiler: ee-gcc2.9-991111 */
extern void func_0026C690(const char *, ...);
extern void func_00288328(int);
extern void func_002884C8(void);
extern int func_0028D3F0(const char *, int);
extern char D_00349370[];
extern char D_00349380[];
int func_0028D590(const char *img) {
    char buf[80];
    const char *prefix = D_00349370;
    char *out;
    const char *p = img;
    const char *base;
    if (*p) {
        base = img - 11;
        do { p++; } while (*p);
    } else {
        base = img - 11;
    }
    if ((unsigned int)(p - base) > 80) {
        func_0026C690(D_00349380, img);
        return 0;
    }
    func_00288328(0);
    func_002884C8();
    out = buf;
    while (*prefix) *out++ = *prefix++;
    while (*img) *out++ = *img++;
    *out = 0;
    return func_0028D3F0(buf, 0);
}
