/* compiler: ee-gcc2.9-991111 */

extern int D_003043E8;
extern int D_00304440;
extern char D_00305590[];
extern int func_00271038(int);
extern void func_00285C80(int);
extern int func_00288B68(void *, int, int, void *, int, void *, int,
                       void *, void *);

/* Command gate 2 submits RPC 14 without a payload and returns its DMA reply.
 * The gate retains the shared semaphore, so both RPC outcomes release it. */
int func_002711A8(void)
{
    int result;
    if (!func_00271038(2))
        return 0;
    if (func_00288B68(D_00305590, 14, 0, 0, 0, &D_00304440, 4, 0, 0) < 0) {
        func_00285C80(D_003043E8);
        return 0;
    }
    result = *(int *)((unsigned int)&D_00304440 | 0x20000000);
    func_00285C80(D_003043E8);
    return result;
}
