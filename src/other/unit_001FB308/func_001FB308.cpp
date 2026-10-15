typedef int s32;
typedef float f32;

extern "C" void func_001FB308(char *arg0) {
    *(s32 *)(arg0 + 0x3F0) = 0;
    *(s32 *)(arg0 + 0x3F4) = 0;
    *(s32 *)(arg0 + 0x3F8) = 0;
    *(s32 *)(arg0 + 0x400) = 0;
    *(f32 *)(arg0 + 0x404) = 2.0f;
}
