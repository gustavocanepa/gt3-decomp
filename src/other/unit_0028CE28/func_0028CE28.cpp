#include "types.h"

extern "C" void func_0028CC20(s32 a0, s32 a1, s32 a2, void *a3);

extern "C" void func_0028CE28(s32 a0, s32 a1, s32 a2)
{
    char buf[0x10];
    func_0028CC20(a0, a1, a2, buf);
}
