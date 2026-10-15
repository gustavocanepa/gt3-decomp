/* compiler: ee-gcc2.9-991111 */
typedef struct Msg {
    unsigned int id;
    int a;
    int b;
    void *buf;
} Msg;

extern char D_004B11A8[];
extern int func_00286090(int, Msg *);

int func_0028D778(unsigned short id, int a, int b) {
    Msg m;
    m.id = id;
    m.a = a;
    m.b = b;
    m.buf = (void *)((unsigned int)D_004B11A8 | 0x20000000);
    return func_00286090(1, &m);
}
