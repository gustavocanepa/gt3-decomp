/* compiler: ee-gcc2.9-991111 */
struct Slot { int p0; int p4; int p8; int pc; unsigned flags; struct Slot *self; int id; int p1c; int pad[8]; };
struct Pool { int cnt; struct Slot *slots; int n; };
extern int func_0028D6A0(void);
extern int func_0028D6E8(void);

static inline int next_id(struct Pool *p) {
    int id = ++p->cnt;
    if (id == 1) { p->cnt++; return 1; }
    return id;
}

struct Slot *func_002884F0(struct Pool *pool) {
    int i;
    int n;
    struct Slot *s;
    func_0028D6A0();
    n = pool->n;
    s = pool->slots;
    for (i = 0; i < n; i++, s++) {
        if (!(s->flags & 1)) {
            int c, id;
            s->flags = (i << 16) | 5;
            id = next_id(pool);
            s->self = s;
            s->id = id;
            func_0028D6E8();
            return s;
        }
    }
    func_0028D6E8();
    return 0;
}
