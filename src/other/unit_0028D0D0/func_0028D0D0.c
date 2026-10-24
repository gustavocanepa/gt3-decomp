/* compiler: ee-gcc2.9-991111 */
struct RpcBuf { int result; int value; char name[0xFC]; char name2[0xFC]; };
struct Result { int result; int value; };
extern struct RpcBuf D_004B0F00;
extern int D_004B1100;
extern int func_0028CA58(void);
extern int func_0028CB58(void);
extern char *func_0027EE50(char *, const char *, unsigned int);
extern int func_00288B68(void *, int, unsigned int, void *, int, void *, int, void *, void *);
int func_0028D0D0(const char *name, const char *name2, struct Result *out, int fno) {
    if (func_0028CA58() < 0) return -0x10000;
    if (func_0028CB58() != 0) return -0x10004;
    func_0027EE50(D_004B0F00.name, name, 0xFC);
    D_004B0F00.name[0xFB] = 0;
    func_0027EE50(D_004B0F00.name2, name2, 0xFC);
    D_004B0F00.name2[0xFB] = 0;
    if (func_00288B68(&D_004B1100, fno, 0, &D_004B0F00, 0x200, &D_004B0F00, 0x10, 0, 0) < 0) return -0x10001;
    if (D_004B0F00.result == 0) return -0x10003;
    out->result = D_004B0F00.result;
    out->value = D_004B0F00.value;
    return 0;
}
