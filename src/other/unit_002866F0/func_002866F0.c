/* compiler: ee-gcc2.9-991111 */
int func_0028D6A0(void);
void func_0028D6E8(void);
int func_002859A0(void *arg);

int func_002866F0(void *arg)
{
    int status;
    int ret;

    __asm__ volatile("mfc0 %0, $12" : "=r"(status));
    status &= 0x10000;
    if (status)
        func_0028D6A0();
    ret = func_002859A0(arg);
    __asm__ volatile("sync.l");
    if (status)
        func_0028D6E8();
    return ret;
}
