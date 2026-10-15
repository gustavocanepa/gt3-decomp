/* compiler: ee-gcc2.9-991111 */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char D_002E1080[];
s32 func_00213210(s32 arg0) {
    return *(s32 *)((s32)D_002E1080 + (arg0 * 4));
}
