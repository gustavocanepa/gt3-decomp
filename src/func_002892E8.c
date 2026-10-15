/* compiler: ee-gcc2.9-991111 */
typedef struct Slot {
    int unk0;
    int flags;
    int unk8;
    int unkC;
} Slot;

extern int D_00308258;
extern Slot D_004B0A80[32];
extern void func_00289288(void);
extern int func_00285CA0(int sema);
extern int func_00285C80(int sema);

Slot *func_002892E8(void)
{
    Slot *s;

    func_00289288();
    func_00285CA0(D_00308258);
    for (s = D_004B0A80; s < D_004B0A80 + 32; s++) {
        if (s->flags == 0) {
            s->flags = 0x10000000;
            func_00285C80(D_00308258);
            return s;
        }
    }
    func_00285C80(D_00308258);
    return 0;
}
