/* compiler: ee-gcc2.9-991111 */
extern int D_00308264;
extern char D_004B0D00[];
extern int D_004B0DC0[];
extern int D_004B0D40[];

int func_00288B68(void *cd, int fno, int mode, void *send, int ssize, void *recv, int rsize, void *end, void *arg);

int func_0028C8F0(int value)
{
    if (D_00308264 < 0)
        return 0;
    D_004B0DC0[0] = value;
    if (func_00288B68(D_004B0D00, 2, 0, D_004B0DC0, 4, D_004B0D40, 4, 0, 0) < 0)
        return -1;
    return D_004B0D40[0];
}
