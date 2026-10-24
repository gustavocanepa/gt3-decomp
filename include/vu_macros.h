#ifndef VU_MACROS_H
#define VU_MACROS_H

/* The VU0 macros of the graphics code at 0x494000-0x4B8000 (unit_00494578), as matched sources
 * reconstructed them (0049F0F0, 0049EB90, 0049E698, 0049CFE8; 2026-10-16). The original wrote them
 * as do-while(0) macros: the loop note is a scheduling barrier at the macro's first instruction and
 * makes the next label 8-aligned, which explains drafts that miss only by "constants issued before
 * the load" or by one stray nop. One asm statement per instruction (tools/asm_policy.py).
 *
 * Retail signatures: VU_SET_VF is `pcpyld` then `qmtc2.i` into one $vfN; VU_GET_MATRIX is a test of
 * a mode byte against 2, then either four `vmove.xyzw $vfN, $vf28..31` or four `lqc2`. */

typedef unsigned long long vu_u64;
typedef unsigned int vu_u128 __attribute__((mode(TI)));

/* $vfN = (x, y, z, w), each a 32-bit pattern in a 64-bit value. */
#define VU_SET_VF(n, x, y, z, w) do { vu_u64 _x = (x), _y = (y), _z = (z), _w = (w); vu_u128 _v; __asm__("pcpyld %0, %1, %2" : "=r"(_v) : "r"(_w << 32 | _z), "r"(_y << 32 | _x)); __asm__ volatile("qmtc2.i %0, $vf" #n : : "r"(_v)); } while (0)

/* $vfa..$vfd = the matrix: from $vf28-31 when (s)->mode == 2, else from (s)->m[0..3]. */
#define VU_GET_MATRIX(s, a, b, c, d) do { if ((s)->mode == 2) { __asm__ volatile("vmove.xyzw $vf" #a ", $vf28"); __asm__ volatile("vmove.xyzw $vf" #b ", $vf29"); __asm__ volatile("vmove.xyzw $vf" #c ", $vf30"); __asm__ volatile("vmove.xyzw $vf" #d ", $vf31"); } else { __asm__ volatile("lqc2 $vf" #a ", %0" : : "m"((s)->m[0])); __asm__ volatile("lqc2 $vf" #b ", %0" : : "m"((s)->m[1])); __asm__ volatile("lqc2 $vf" #c ", %0" : : "m"((s)->m[2])); __asm__ volatile("lqc2 $vf" #d ", %0" : : "m"((s)->m[3])); } } while (0)

/* A packed 12-byte (x, y, z) point: x and y as one 64-bit word, z after it. */
struct VuVec3 {
    vu_u64 xy;
    unsigned int z;
} __attribute__((packed));

/* *p = $vfN.xyz: qmfc2, pcpyud for z, two unaligned stores. The do-while(0) is the original's: its
 * loop note is why retail issues the next load one cycle earlier after the stores (003E3458,
 * 003B7C98; the same definition also gives 00451238; the vf28 transform around it is in 10 functions). */
#define VU_GET_VEC3(n, p) do { vu_u64 _lo; unsigned int _hi; __asm__ volatile("qmfc2.ni %0, $vf" #n : "=r"(_lo)); __asm__("pcpyud %0, %1, %1" : "=r"(_hi) : "r"(_lo)); ((struct VuVec3 *)(p))->xy = _lo; ((struct VuVec3 *)(p))->z = _hi; } while (0)

#endif
