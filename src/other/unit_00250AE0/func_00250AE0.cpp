/* compiler: ee-gcc2.96-no-strict-aliasing */
typedef int s32;
typedef unsigned char u8;

struct Regs {
    char pad[0x1BE];
    u8 value;
};

u8 func_00250AE0(void) {
    volatile Regs *ptr = (volatile Regs *)0x70003000;
    return ptr->value;
}
