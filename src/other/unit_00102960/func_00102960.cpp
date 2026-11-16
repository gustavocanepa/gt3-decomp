#include "types.h"

extern "C" s32 func_00240DB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, const char *arg4);

extern "C" void func_00102960(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    while (func_00240DB8(arg0, arg3, arg1, arg2, "Q212PlayStation213FileDevice") == -1) {
    }
}
