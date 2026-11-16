/* compiler: ee-gcc2.9-991111 */
extern int D_00305E88;
extern "C" int func_00273168(void *, void *, void *, int);
extern "C" int func_002732A0(void *a, void *b, void *c) {
    int r = func_00273168(a, b, c, 0x40);
    if (r == 0) D_00305E88 = 0xB;
    return r;
}
