/* compiler: ee-gcc2.9-991111 */
struct Ent {
    unsigned char kind;
    unsigned char val;
};

struct Queue {
    int head;
    int tail;
    struct Ent e[512];
};

extern struct Queue D_004AD668;
extern int D_004AD660;
extern int D_003081B8;
extern void func_00285C90(int sema);

int func_00286C30(unsigned int c) {
    struct Queue *q;
    int i;
    if (c >= 0x80 || D_003081B8 == 0)
        return -1;
    q = &D_004AD668;
    i = q->tail & 0x1FF;
    q->tail = i + 1;
    q->e[i].kind = 1;
    q->e[i].val = c;
    func_00285C90(D_004AD660);
    return c;
}
