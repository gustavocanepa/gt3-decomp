/* compiler: ee-gcc2.9-991111 */
struct Entry { int w[4]; };
extern void func_00289288(void);
extern int func_00285CA0(int sema);
extern int func_00285C80(int sema);
extern int D_00308258;
extern struct Entry D_004B0A80[];

struct Entry *func_00289370(unsigned int n)
{
    struct Entry *e;
    func_00289288();
    func_00285CA0(D_00308258);
    if (n >= 32) {
        func_00285C80(D_00308258);
        return 0;
    }
    e = &D_004B0A80[n];
    func_00285C80(D_00308258);
    return e;
}
