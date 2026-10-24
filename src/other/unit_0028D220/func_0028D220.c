/* compiler: ee-gcc2.9-991111 */
extern int func_0028CA58(void);
extern int func_00288B68(void *,int,int,void *,int,void *,int,void *,void *);
extern char D_004B1100[];
extern int D_004B0F00[8];
int func_0028D220(int addr, void *dst, unsigned int type) {
 if (func_0028CA58()<0) return 0xffff0000;
 if (type>=3) return 0xfffefffe;
 D_004B0F00[0]=addr;
 D_004B0F00[1]=type;
 if (func_00288B68(D_004B1100,3,0,D_004B0F00,32,D_004B0F00,32,0,0)<0) return 0xfffeffff;
 if (type==0) *(unsigned char *)dst=*(unsigned char *)D_004B0F00;
 else if (type==1) *(unsigned short *)dst=*(unsigned short *)D_004B0F00;
 else if (type==2) *(int *)dst=D_004B0F00[0];
 else return 0xfffefffe;
 return 0;
}
