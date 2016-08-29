#include <stdio.h>

int a[1002][1002], n;

int black(int x1, int y1, int x2, int y2) {
      if(x1 < 0 || y1 < 0 || x1 >= n || y1 >= n) return 0;
      if(x2 < 0 || y2 < 0 || x2 >= n || y2 >= n) return 0;
      int i, j;
      for(i = x1; i <= x2; i++)
            for(j = y1; j <= y2; j++)
                  if(a[i][j] == 0) return 0;
      return 1;
}

int check(int x, int y) {
      int ans = 0, i, j;
      //1
      ans |= black(x, y, x + 2, y + 2);
      //2
      ans |= black(x, y - 1, x + 2, y + 1);
      //3
      ans |= black(x, y - 2, x + 2, y);
      //4
      ans |= black(x - 1, y, x + 1, y + 2);
      //5
      ans |= black(x - 1, y - 1, x + 1, y + 1);
      //6
      ans |= black(x - 1, y - 2, x + 1, y);
      //7
      ans |= black(x - 2, y, x, y + 2);
      //8
      ans |= black(x - 2, y - 1, x, y + 1);
      //9
      ans |= black(x - 2, y - 2, x, y);
      return ans;
}

int main(int argc, char *argv[]) {
      int m, i, j;
      int x, y;
      scanf("%d %d", &n, &m);
      for(i = 0; i < m; i++) {
            scanf("%d %d", &x, &y);
            x--, y--;
            a[x][y] = 1;
            if(check(x, y)) {
                  printf("%d\n", i + 1);
                  return 0;
            }
      }
      puts("-1");
      return 0;
}
