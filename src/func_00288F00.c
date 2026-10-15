/* compiler: ee-gcc2.9-991111 */
struct Node { char pad[0x38]; struct Node *next; };
struct Queue { int a, b; struct Node *head; };
int func_0028D6A0(void);
void func_0028D6E8(void);

struct Node *func_00288F00(struct Node *n, struct Queue *q)
{
    struct Node *p;
    func_0028D6A0();
    p = q->head;
    if (p == n) {
        q->head = p->next;
    } else {
        while (p != 0) {
            if (p->next == n) {
                p->next = n->next;
                break;
            }
            p = p->next;
        }
    }
    func_0028D6E8();
    return p;
}
