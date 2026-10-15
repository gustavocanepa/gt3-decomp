/* compiler: ee-gcc2.9-991111 */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char D_004AE0C0[];
s32 func_00287C10(s32 arg0) {
    return *(s32 *)((s32)D_004AE0C0 + (arg0 * 4));
}
