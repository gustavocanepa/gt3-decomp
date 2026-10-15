/* compiler: ee-gcc2.9-991111 */
extern int func_002871A8(void);
extern int func_002870D8(int a, int b);
extern int D_00307A10;

int func_00286200(int mode, int a, int b)
{
    if (mode == 0) {
        if (D_00307A10 == 0) {
            if (func_002871A8() == 0)
                return -1;
            D_00307A10 = 1;
        }
        return func_002870D8(a, b);
    }
    return -1;
}
