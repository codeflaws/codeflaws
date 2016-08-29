#include <stdio.h>

int tab[101][101][2];

int main(int argc, char *argv[])
{
   int n1, n2, k1, k2, i, j, k, l, m;
   scanf("%d %d %d %d", &n1, &n2, &k1, &k2);
   for (i = 1; i <= k1; i++)
      tab[i][0][0] = 1;
   for (j = 1; j <= k2; j++)
      tab[0][j][1] = 1;
   for (k = 2; k <= n1+n2; k++)
      for (i = 1; i <= n1; i++)
      {
         j = k-i;
         if (j < 1 || j > n2)
            continue;
         m = j < k2 ? j : k2;
         for (l = 1; l <= m; l++)
            tab[i][j][1] += tab[i][j-l][0];
         tab[i][j][1] %= 100000000;
         m = i < k1 ? i : k1;
         for (l = 1; l <= m; l++)
            tab[i][j][0] += tab[i-l][j][1];
         tab[i][j][0] %= 100000000;
      }
   printf("%d\n", tab[n1][n2][0]+tab[n1][n2][1]);
   return 0;
}
