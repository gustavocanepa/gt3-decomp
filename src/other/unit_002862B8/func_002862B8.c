/* compiler: ee-gcc2.9-991111 */
/* Adjust the shared heap break under interrupt exclusion. The upper limit is
 * queried from the kernel; failure sets errno to ENOMEM and retains the break. */
extern unsigned D_00307A14;
extern unsigned func_00285C40(void);
extern int *func_0027D8B8(void);
static inline unsigned cpu_status(void) {
    unsigned value;
    __asm__ volatile("mfc0 %0, $12" : "=r"(value));
    return value;
}
static inline void disable_interrupts(void) { __asm__ volatile("di" ::: "memory"); }
static inline void synchronize_pipeline(void) { __asm__ volatile("sync.p" ::: "memory"); }
static inline void enable_interrupts(void) { __asm__ volatile("ei" ::: "memory"); }
void *func_002862B8(int increment) {
    unsigned enabled;
    unsigned next;
    __asm__ volatile("mfc0 %0, $12" : "=r"(enabled));
    enabled&=0x10000;
    if(enabled) {
        do {
            disable_interrupts();
            synchronize_pipeline();
        } while(cpu_status()&0x10000);
    }
    next=D_00307A14+increment;
    if(func_00285C40()<next) {
        *func_0027D8B8()=12;
        if(enabled) enable_interrupts();
        return (void *)-1;
    } else {
        void *previous=(void *)D_00307A14;
        D_00307A14=next;
        if(enabled) enable_interrupts();
        return previous;
    }
}
