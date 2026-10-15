/* compiler: ee-gcc2.9-991111 */
typedef int s32;
typedef unsigned char u8;

extern u8 D_00305EA5;

s32 func_00274660(void);
void func_00285D10(s32 *buf);

s32 func_00274760(void) {
    s32 buf[4];
    if (func_00274660() != 0) {
        return D_00305EA5;
    }
    func_00285D10(buf);
    return buf[0] & 1;
}
