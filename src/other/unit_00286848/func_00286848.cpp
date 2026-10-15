struct Obj;

extern "C" char *func_00285A10(Obj *arg0);

extern "C" void func_00286848(Obj *arg0) {
    func_00285A10(arg0);
    __asm__ volatile("sync");
}
