#include "types.h"

struct Obj {
    char pad[4];
    u32 unk4;
};

extern "C" void *func_00285B50(Obj *);
extern "C" void func_00288D98(void *, const void *);
extern "C" void func_00288E30(void *, u32, const char *, u32, u32, u32, void *);
extern "C" void func_00289248(void *);

extern "C" void func_0026E4C8(Obj *o) {
    char *p = (char *)o + 0xC;
    func_00288D98(p, func_00285B50(o));
    func_00288E30((char *)o + 0x24, 0x45574650, "r0001", o->unk4, 0, 0, p);
    return func_00289248(p);
}
