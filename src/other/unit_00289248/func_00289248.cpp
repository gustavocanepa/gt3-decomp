/* compiler: ee-gcc2.9-991111 */
extern "C" void *func_00289028(void *);
extern "C" void func_00289080(void *);
extern "C" void func_00285B80(void);

extern "C" void func_00289248(void *self) {
    for (;;) {
        void *e;
        while ((e = func_00289028(self)) != 0) {
            func_00289080(e);
        }
        func_00285B80();
    }
}
