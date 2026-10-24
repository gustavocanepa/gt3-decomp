#include "types.h"

extern "C" void func_0017E620();
extern "C" void func_0027C3E8(void *a0, void *a1, void *a2);

extern char D_0032C210[];
extern int D_004B1EA0;

extern int D_004B2060;

extern "C" void *func_0018A028(void) {
    if (D_004B2060 == 0) {
        func_0017E620();
        func_0027C3E8(&D_004B2060, D_0032C210, &D_004B1EA0);
    }
    return &D_004B2060;
}
