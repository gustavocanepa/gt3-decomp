/* compiler: ee-gcc2.9-991111 */
struct Buf { int size,result; char name[252]; char args[252]; };
extern struct Buf D_004B0F00;
extern int D_004B1100;
int func_0028CA58(void),func_0028CB58(void);
char *func_0027EE50(char *,const char *,unsigned int);
void *func_0027D990(void *,const void *,unsigned int);
int func_00288B68(void *,int,int,void *,int,void *,int,void *,void *);
int func_0028CE68(const char *name,int arglen,const void *args,int *result,int fno) {
    if(func_0028CA58()<0) return -0x10000;
    if(func_0028CB58()) return -0x10004;
    func_0027EE50(D_004B0F00.name,name,252);
    D_004B0F00.name[251]=0;
    if(args) {
        if(arglen>252) {
            __builtin_memcpy(D_004B0F00.args,args,252);
            D_004B0F00.size=252;
        } else {
            func_0027D990(D_004B0F00.args,args,arglen);
            D_004B0F00.size=arglen;
        }
    } else {
        D_004B0F00.args[0]=0;
        D_004B0F00.size=0;
    }
    if(func_00288B68(&D_004B1100,fno,0,&D_004B0F00,512,&D_004B0F00,8,0,0)<0) return -0x10001;
    { int ret=D_004B0F00.size;
    *result=D_004B0F00.result;
    return ret; }
}
