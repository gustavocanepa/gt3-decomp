/* compiler: ee-gcc2.9-991111 */
typedef unsigned char u8;
extern const char *D_00305E68[];
extern u8 D_00347B00;
extern "C" char *func_0027EB84(char *, const char *);
extern "C" void func_00272328(unsigned idx, u8 *out) {
    if (idx < 4) {
        func_0027EB84((char *)out, D_00305E68[idx]);
        return;
    }
    *out = D_00347B00;
}
