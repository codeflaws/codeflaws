#include <stdio.h>
// 1140
int main(int argc, char *argv[]) {
  int a, ta, b, tb, T, Th, Tm, Rs, Re, result;
  scanf("%d %d\n", &a, &ta);
  scanf("%d %d\n", &b, &tb);
  scanf("%d:%d", &Th, &Tm);
  T = (Th - 5) * 60 + Tm;
  Rs = T - tb;
  if(Rs < 0)
    Rs = 0;
  Re = T + ta;
  if(Re > 1140)
    Re = 1140;
  Rs = Rs/b + (Rs > b);
  Re = Re/b - (Re%b == 0);
  result = 0;
  if(Rs <= Re)
    result = Re - Rs + 1;
  printf("%d\n", result);
  return 0;
}
