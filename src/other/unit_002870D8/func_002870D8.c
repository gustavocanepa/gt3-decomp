/* compiler: ee-gcc2.9-991111 */
struct Node { int x; volatile int count; unsigned char *bytes; };
struct Tty { char pad[24]; struct Node *node; };
extern struct Tty D_004ADB90;
extern void func_00286DB0(struct Node *);
int func_002870D8(char *buf, int size) {
    int i = 0;
    while (i < size) {
        char *out = buf + i;
        int next = i + 1;
        while (D_004ADB90.node->count == 0) { }
        *out = *D_004ADB90.node->bytes;
        func_00286DB0(D_004ADB90.node);
        if (*out == 10 || *out == 13) return next;
        i = next;
    }
    return i;
}
