/* compiler: ee-gcc2.9-991111 */
extern volatile int D_00304414;
extern volatile int D_00304418, D_003043F0;
extern volatile int D_003043E8, D_003043E0;
extern volatile int D_003043D4, D_004AB540;
extern int func_00285C90(int);
void func_00270710(int *p) {
 D_00304414 = *p;
 D_00304418 = D_00304414;
 if (D_00304414 == 11) {
  D_00304414 = 0;
  D_003043F0 = 0;
  return;
 }
 func_00285C90(D_003043E8);
 if (D_003043D4 && D_004AB540) func_00285C90(D_003043E0);
 else D_003043F0 = 0;
 D_00304414 = 0;
}
