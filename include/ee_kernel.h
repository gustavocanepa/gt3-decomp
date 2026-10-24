#ifndef EE_KERNEL_H
#define EE_KERNEL_H

/* The interrupt-handler exit of Sony's EE kernel header (eekernel.h): one asm statement holding
 * both instructions. As one statement the compiler keeps sync.l and ei together after the
 * epilogue's loads, the order every retail handler has (0054CFA8, 0054D960, 0054D9A0, 00551728,
 * 00555290, 00557AF0, 0055EB08, 004AB668, 005036D8); two separate one-instruction asms do not.
 * Owner's rule (2026-10-15): the most faithful source wins, so this macro, and no other
 * multi-instruction asm. */
#define ExitHandler() __asm__ volatile("sync.l; ei")

/* The module gp switch of the EE kernel header (GetGp/SetGp): code that calls back into another
 * module (Sony's SIF command handler, 005B0E30) saves $gp, loads the callee's, and restores it.
 * Retail moves $gp with `daddu`, one instruction each way. Like the kernel header, both clobber
 * memory, so what the callee may have changed is loaded again after the switch (005B0E30). */
static __inline__ void *GetGp(void)
{
    void *gp;
    __asm__ volatile("move %0, $gp" : "=r"(gp) : : "memory");
    return gp;
}

static __inline__ void *SetGp(void *gp)
{
    void *old;
    __asm__ volatile("move %0, $gp" : "=r"(old));
    __asm__ volatile("move $gp, %0" : : "r"(gp) : "memory");
    return old;
}

#endif
