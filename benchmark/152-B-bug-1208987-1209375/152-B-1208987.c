#include<stdio.h>

int main(int argc, char *argv[]){
    int n, m, x, y, k, dx, dy, tx, ty, t;
    long long s = 0;
    scanf("%d%d%d%d%d", &n, &m, &x, &y, &k);
    while (k--){
          scanf("%d%d", &dx, &dy);
          if (dx == 0)tx = 2000000000;
          else if (dx < 0)tx = (x - 1) / -dx;
          else tx = (n - x) / dx;
          if (dy == 0)ty = 2000000000;
          else if (dy < 0)ty = (y - 1) / -dy;
          else ty = (n - y) / dy;
          t = tx < ty ? tx : ty;
          x += dx * t, y += dy * t;
          s += t;
    }
    printf("%I64d\n", s);
    return 0;
}
