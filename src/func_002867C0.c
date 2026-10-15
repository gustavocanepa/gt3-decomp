/* compiler: ee-gcc2.9-991111 */
int func_0028D6A0(void);
void func_0028D6E8(void);
int func_002859C0(void *arg);

int func_002867C0(void *arg)
{
    int status;
    int ret;

    __asm__ volatile("mfc0 %0, $12" : "=r"(status));
    status &= 0x10000;
    if (status)
        func_0028D6A0();
    ret = func_002859C0(arg);
    __asm__ volatile("sync.l");
    if (status)
        func_0028D6E8();
    return ret;
}
