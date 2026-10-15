/* compiler: ee-gcc2.96-no-strict-aliasing */
typedef int s32;

struct Regs {
    char pad[0x140];
    s32 value;
};

void func_0024CCB0(s32 arg0) {
    volatile Regs *ptr = (volatile Regs *)0x70003000;
    ptr->value = arg0;
}
