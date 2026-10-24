/* compiler: ee-gcc2.9-991111 */
struct Queue { char pad[12]; unsigned char *func_005AE268; };
struct Tty { int socket; volatile int wlen,rlen; volatile int busy; unsigned char *wbuf,*rbuf; struct Queue *queue; };
extern void func_00286D70(struct Queue *);
extern void func_00287B48(const char *,...);
extern int func_0028D840(int,void *,int);
extern int func_0028D878(int,void *,int);
extern char D_00349118[],D_00349140[],D_00349158[],D_00349170[];
void func_00286DF0(int event,int count,struct Tty *t) {
 unsigned short *packet;
 switch(event) {
 case 1: case 2:
  if(count!=0) {
   int offset;
   if((unsigned)(t->rlen+count)>0x140) func_00287B48(D_00349118);
   offset=t->rlen;
   count=func_0028D840(t->socket,t->rbuf+offset,count & 0xffff);
   if(count<0) func_00287B48(D_00349140);
   t->rlen+=count;
  } else {
   packet=(unsigned short *)t->rbuf;
   for(count=12;count<*packet;count++) {
    *t->queue->func_005AE268=t->rbuf[count];
    func_00286D70(t->queue);
   }
   t->rlen=0;

  }
  return;
 case 3: {
  int n=func_0028D878(t->socket,t->wbuf,t->wlen & 0xffff);
  if(n<0) {func_00287B48(D_00349158,n); t->busy=0;}
  else {t->wbuf+=n; t->wlen-=n;}
  return;
 }
 case 4:
  if(t->wlen!=0) func_00287B48(D_00349170,t->wlen);
  t->busy=0;
  return;
 default: break;
 }
}
