/* compiler: ee-gcc2.96-no-strict-aliasing */
extern "C" void func_00257A44(void);

extern "C" float func_00255A48(void) {
    float r;
    func_00257A44();
    __asm__ volatile("qmfc2.i %0, $vf1" : "=r"(r));
    return r;
}
