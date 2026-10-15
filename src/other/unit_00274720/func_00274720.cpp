/* compiler: ee-gcc2.9-991111 */
typedef int s32;
typedef unsigned int u32;
typedef unsigned char u8;

extern u8 D_00305EA2;
extern "C" s32 func_00274660(void);
extern "C" void func_00285D10(u32 *);

extern "C" s32 func_00274720(void) {
    u32 cfg[4];
    if (func_00274660() != 0)
        return D_00305EA2;
    func_00285D10(cfg);
    return (cfg[0] >> 1) & 3;
}
