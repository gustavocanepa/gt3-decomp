/* compiler: ee-gcc2.9-991111 */
typedef struct SifServe {
    unsigned int command;
    void *(*func)(unsigned int, void *, int);
    void *buff;
    int size;
    void *cfunc;
    void *cbuff;
    int csize;
    void *client;
    unsigned int paddr;
    unsigned int fno;
    void *receive;
    int rsize;
    int rmode;
    unsigned int rid;
} SifServe;

typedef struct SifPkt {
    char pad0[0x10];
    int f10;
    char pad14[4];
    int f18;
    void *f1c;
    unsigned int f20;
} SifPkt;

typedef struct SifDma {
    unsigned int data;
    unsigned int addr;
    int size;
    int mode;
} SifDma;

extern char D_004AF940[];
extern int func_00286020(SifDma *, int);
extern int func_002880D0(int, void *, int, void *, void *, int);
extern void func_00288278(void *, int);
extern SifPkt *func_002885B8(void *);
extern SifPkt *func_002885E8(void *, int);
extern int func_0028D6A0(void);
extern int func_0028D6E8(void);

void func_00289080(SifServe *sd)
{
    SifPkt *pkt;
    int n;
    int rsize = 0;
    void *rbuff;
    SifDma dmat[2];
    int id;
    int i;

    rbuff = sd->func(sd->fno, sd->buff, sd->size);
    if (rbuff != 0)
        rsize = sd->rsize;
    if (sd->size > 0)
        func_00288278(sd->buff, sd->size);
    if (rsize > 0)
        func_00288278(rbuff, rsize);
    func_0028D6A0();
    if (sd->rid & 4)
        pkt = func_002885E8(D_004AF940, sd->rid >> 16);
    else
        pkt = func_002885B8(D_004AF940);
    func_0028D6E8();
    pkt->f20 = 0x8000000A;
    pkt->f1c = sd->client;
    if (sd->rmode) {
        while (func_002880D0(0x80000008, pkt, 0x40, rbuff, sd->receive, rsize) == 0)
            ;
        return;
    }
    pkt->f18 = 0;
    n = 0;
    pkt->f10 = 0;
    if (rsize > 0) {
        n = 1;
        dmat[0].data = (unsigned int)rbuff;
        dmat[0].addr = (unsigned int)sd->receive;
        dmat[0].size = rsize;
        dmat[0].mode = 0;
    }
    dmat[n].data = (unsigned int)pkt;
    dmat[n].addr = sd->paddr;
    dmat[n].size = 0x40;
    dmat[n].mode = 0;
    n++;
    while ((id = func_00286020(dmat, n)) == 0) {
        for (i = 0x100000; i != -1; i--) ;
        if (id != 0)
            break;
    }
}
