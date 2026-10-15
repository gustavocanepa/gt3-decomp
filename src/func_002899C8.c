/* compiler: ee-gcc2.9-991111 */
extern char D_004B0CA8[];
extern char D_00307A0C[];
extern char *D_00308260;
int func_0027D8FC(const char *, const char *, int);

int func_002899C8(void)
{
    char *b = D_00307A0C;
    char *a = D_004B0CA8;
    return func_0027D8FC(a, b, 4) && func_0027D8FC(a, D_00308260, 4) && func_0027D8FC(b, D_00308260, 4);
}
