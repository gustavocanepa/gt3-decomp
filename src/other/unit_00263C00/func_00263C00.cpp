/* compiler: ee-gcc2.96-no-strict-aliasing */
extern "C" void func_002646E8(void);
extern "C" void func_00264180(unsigned int);

extern "C" void func_00263C00(void)
{
    func_002646E8();
    unsigned int low = *(volatile unsigned int *)0x10002020 & 0x7F;
    return func_00264180(((low + 7) & 0xF8) - low);
}
