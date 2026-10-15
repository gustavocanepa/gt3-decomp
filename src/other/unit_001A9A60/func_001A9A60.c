/* compiler: ee-gcc2.9-991111-gp */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_001A9A30(s32);                             /* extern */
M2C_UNK func_0027E794(s32, s32);                    /* extern */
M2C_UNK func_0027EB84(s32, s32);                    /* extern */
extern s32 D_00352238;

extern char D_002C2AF0[];
extern char D_00352240[];
s32 func_001A9A60(s32 arg0, s32 arg1) {
    func_0027EB84(arg1, *(s32 *)((s32)D_002C2AF0 + (D_00352238 * 4)));
    func_0027E794(arg1, (s32)D_00352240);
    func_0027E794(arg1, func_001A9A30(arg0));
    return arg1;
}
