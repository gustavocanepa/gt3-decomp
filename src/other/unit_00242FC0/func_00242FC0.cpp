#include "types.h"

struct Ops {
    s32 (*get)(void);
};

struct Entry {
    char pad0[0x8];
    Ops *ops;
};

extern "C" Entry *func_00242B38(s32 id);

extern "C" s32 func_00242FC0(s32 id) {
    Entry *e = func_00242B38(id);
    s32 r = 0;
    if (e) {
        r = e->ops->get();
    }
    return r;
}
