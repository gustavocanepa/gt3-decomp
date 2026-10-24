/* compiler: ee-gcc2.9-991111 */
extern int D_00308264;
struct Buf { void *addr; char name[252]; };
extern struct Buf D_004B0E00;
extern char D_004B0D00[];
extern int D_004B0D40;
int func_00288B68(void *,int,int,void *,int,void *,int,void *,void *);
int func_0028C968(const char *name, void *addr) {
 int i, r;
 if (D_00308264 < 0) return 0;
 for (i=0; i<252 && (D_004B0E00.name[i]=name[i]); i++);
 if (i==252) { D_004B0E00.name[251]=0; i=251; }
 D_004B0E00.addr=addr;
 D_004B0E00.name[251]=0;
 r=func_00288B68(D_004B0D00,3,0,&D_004B0E00,i+5,&D_004B0D40,4,0,0);
 if (r<0) return -1;
 return D_004B0D40;
}
