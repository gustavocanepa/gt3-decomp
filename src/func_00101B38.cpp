typedef short s16;

struct VEntry {
    char pad[0x10];
    s16 delta;
    void (*fn)(void *);
};

struct ObjInner {
    VEntry *vtbl;
};

struct Obj {
    char pad[0x18];
    struct ObjInner *unk18;
};

extern "C" void func_00101B38(struct Obj *arg0) {
    struct ObjInner *a1 = arg0->unk18;
    if (a1 != 0) {
        VEntry *e = a1->vtbl;
        e->fn((char *)a1 + e->delta);
    }
}
