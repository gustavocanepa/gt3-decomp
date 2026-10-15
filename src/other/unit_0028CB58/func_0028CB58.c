/* compiler: ee-gcc2.9-991111 */
extern char D_004B1128[];
extern char D_00307A0C[];
extern char *D_0030826C;
int func_0027D8FC(const char *, const char *, int);

int func_0028CB58(void)
{
    char *b = D_00307A0C;
    char *a = D_004B1128;
    return func_0027D8FC(a, b, 4) && func_0027D8FC(a, D_0030826C, 4) && func_0027D8FC(b, D_0030826C, 4);
}
