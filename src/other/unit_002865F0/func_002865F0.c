/* compiler: ee-gcc2.9-991111 */
void func_0028D6A0(void);
void func_0028D6E8(void);
void func_00286548(unsigned int, unsigned int);

void func_002865F0(unsigned int start, unsigned int end) {
    unsigned int enabled;
    __asm__ volatile ("mfc0 %0,$12" : "=r" (enabled));
    enabled &= 0x10000;
    if (enabled)
        func_0028D6A0();
    func_00286548(start & ~63U, end & ~63U);
    if (enabled)
        func_0028D6E8();
}
