struct Obj;

extern "C" char *func_00285A30(Obj *arg0);

extern "C" void func_00286888(Obj *arg0) {
    func_00285A30(arg0);
    __asm__ volatile("sync");
}
