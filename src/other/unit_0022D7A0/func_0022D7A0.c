/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

extern s32 D_00352CB8;

extern char D_002E98E8[];
/* A member array indexed by a variable: base + index (a struct field), not index + base. */
#define M2C_ARRAY(base, T, off, idx) (((struct { char pad[off]; T a[1]; } *)(base))->a[idx])
s32 func_0022D7A0(s32 arg0) {
    if (M2C_ARRAY(D_00352CB8, s32, 0x78, arg0) >= 0) {
        return (arg0 * 5) + (s32)D_002E98E8;
    }
    return 0;
}
