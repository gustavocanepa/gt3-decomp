#ifndef SPR_H
#define SPR_H

/* The scratchpad RAM work area at 0x70002000, as the game's rendering code reaches it.
 *
 * Retail loads this base as one opaque `li` (an adjacent lui/ori pair the compiler cannot see
 * into): in unit_00494578 all 186 loads of it are adjacent pairs, while 545 of the 898 other
 * 32-bit constants of the same unit are split and scheduled apart. A plain `(T *)0x70002000`
 * cast gives the folded form instead (`lui 0x7000; lw 0x2110(reg)`), which retail also has, in
 * 25 places: use the cast there and this helper where retail keeps the base in one register.
 * No compiler option reproduces the opaque form (knowledge/gt4.md, "The scratchpad base").
 * Known debt: see knowledge/debt.md; replace this helper once the original form is found. */
static inline void *spr_base(void)
{
    void *p;
    __asm__("li %0, 0x70002000" : "=r"(p));
    return p;
}

#endif
