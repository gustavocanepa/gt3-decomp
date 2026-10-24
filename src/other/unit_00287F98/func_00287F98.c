/* compiler: ee-gcc2.9-991111 */
struct Packet { unsigned int size; void *dest; int cid; int opt; };
struct Dma { void *src; void *dest; int size; int attr; };
extern void *D_004ADFA0;
extern void func_00288278(void *, int);
extern int func_00286020(void *, int);
extern int func_00286030(void *, int);
int func_00287F98(int cid, int mode, struct Packet *packet, int psize, void *src, void *dest, int dsize) {
    volatile struct Dma dma[2];
    int n;
    if ((unsigned int)(psize - 16) >= 97) return 0;
    n = 0;
    if (dsize > 0) {
        packet->size = *(unsigned char *)packet | (dsize << 8);
        ((struct Dma *)dma)[0].src = src;
        ((struct Dma *)dma)[0].dest = dest;
        ((struct Dma *)dma)[0].size = dsize;
        packet->dest = dest;
        ((struct Dma *)dma)[0].attr = 0;
        n = 1;
        if (mode & 4) func_00288278(src, dsize);
    } else {
        packet->dest = 0;
        packet->size = *(unsigned char *)packet;
    }
    dma[n].src = packet;
    dma[n].dest = D_004ADFA0;
    dma[n].size = psize;
    packet->cid = cid;
    *(unsigned char *)packet = psize;
    dma[n].attr = 0x44;
    n++;
    func_00288278(packet, psize);
    if (mode & 1) return func_00286030(dma, n);
    return func_00286020(dma, n);
}
