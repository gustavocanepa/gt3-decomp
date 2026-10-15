struct Obj;

extern "C" char *func_00285A20(Obj *arg0);

extern "C" void func_00286868(Obj *arg0) {
    func_00285A20(arg0);
    __asm__ volatile("sync");
}
