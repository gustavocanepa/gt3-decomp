/* compiler: ee-gcc2.9-991111 */
typedef int s32;

extern char D_00305EA8[];
extern "C" void func_002745C0(void);

extern "C" s32 func_00274660(void) {
    char *p = D_00305EA8;
    if (p[0] == 0) func_002745C0();
    return p[4] == 'T';
}
