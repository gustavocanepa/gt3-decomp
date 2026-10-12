typedef unsigned int u32;

extern "C" int func_00213310(const u32 *p, u32 n) {
    int i;
    for (i = 0; i < 12 && p[i] != 0x157529FFU && p[i] < n; i++)
        ;
    return i >= 12 ? -1 : i;
}
