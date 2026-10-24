/* compiler: ee-gcc2.9-991111 */
typedef struct Msg {
    int a;
    int b;
    int c;
} Msg;
extern int func_00286090(int, Msg *);

int func_0028D878(int a, int b, unsigned short c) {
    Msg m;
    m.a = a;
    m.b = b;
    m.c = c;
    return func_00286090(-6, &m);
}
