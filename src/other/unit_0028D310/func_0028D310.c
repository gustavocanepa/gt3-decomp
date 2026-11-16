/* compiler: ee-gcc2.9-991111 */
extern int func_0028CA58(void);
extern int func_00288B68(void *,int,int,void *,int,void *,int,void *,void *);
extern char D_004B1100[];
extern int D_004B0F00[8];
int func_0028D310(int addr, void *src, int type) {
 if (func_0028CA58()<0) return 0xffff0000;
 D_004B0F00[0]=addr;
 D_004B0F00[1]=type;
 if (type==0) *(unsigned char *)&D_004B0F00[2]=*(unsigned char *)src;
 else if (type==1) *(unsigned short *)&D_004B0F00[2]=*(unsigned short *)src;
 else if (type==2) D_004B0F00[2]=*(int *)src;
 else return 0xfffefffe;
 if (func_00288B68(D_004B1100,2,0,D_004B0F00,32,D_004B0F00,16,0,0)<0) return 0xfffeffff;
 return 0;
}
