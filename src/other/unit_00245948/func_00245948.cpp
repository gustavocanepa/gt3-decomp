#include "types.h"

struct Obj {
    char pad[8];
    s32 unk8;
};

extern "C" const char *func_00245948(struct Obj *arg0) {
    switch (arg0->unk8) {
    case 0:
        return "Invalid";
    case 1:
        return "Ready";
    case 2:
        return "Pause";
    default:
        return "Unknown";
    }
}
