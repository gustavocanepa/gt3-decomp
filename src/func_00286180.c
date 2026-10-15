/* compiler: ee-gcc2.9-991111 */
extern int D_00307A10;
extern int func_002871A8(void);
extern int func_00286F88(int a, int b);

int func_00286180(int mode, int a, int b)
{
    if (mode == 1 || mode == 2) {
        if (D_00307A10 == 0) {
            if (func_002871A8() == 0)
                return -1;
            D_00307A10 = 1;
        }
        return func_00286F88(a, b);
    }
    return -1;
}
