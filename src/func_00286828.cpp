struct Obj;

extern "C" char *func_00285A00(Obj *arg0);

extern "C" void func_00286828(Obj *arg0) {
    func_00285A00(arg0);
    __asm__ volatile("sync");
}
