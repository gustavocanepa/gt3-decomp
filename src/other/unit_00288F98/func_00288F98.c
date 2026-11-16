/* compiler: ee-gcc2.9-991111 */
/* Unlink a registered group while interrupts are excluded. Returns the old
 * head when removing it, otherwise its predecessor, or null when absent.
 * The caller supplies a valid group; the original always reenables IRQs. */
struct Group { char unknown0[0x14]; struct Group *next; };
struct Pool { char unknown0[0x28]; struct Group *groups; };
extern struct Pool D_004AF940;
extern int func_0028D6A0(void);
extern int func_0028D6E8(void);
struct Group *func_00288F98(struct Group *target) {
    struct Group *group;
    func_0028D6A0();
    group = D_004AF940.groups;
    if (group == target) {
        D_004AF940.groups = group->next;
    } else {
        for (; group; group = group->next) {
            if (group->next == target) {
                group->next = target->next;
                break;
            }
        }
    }
    func_0028D6E8();
    return group;
}
