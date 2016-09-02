#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define pi 3.1415926

#define max(a,b) ((a)>(b)?(a):(b))
int p[1010];
int t[1010];

int main(int argc, char *argv[])
{
   int n, c;
   scanf("%d %d", &n, &c);

   int i;
   for (i=0;i<n;i++)
   {
       scanf("%d", &p[i]);
   }
   for (i=0;i<n;i++)
   {
       scanf("%d", &t[i]);
   }

   int R = 0;
   int L = 0;
   int tr = 0;
   int tl = 0;
   int x;

   for (i=0;i<n;i++)
   {
       tr = tr + t[i];
       tl = tl + t[n-1-i];
       //printf("p[%d]=%d %d %d\n", i, p[i], c, tr);
       //x = max(0,p[i]-c*tr);
       //printf("p[%d]=%d %d %d\n", i, p[i], c, tr);
       //printf("1 %d %d %d\n", L, x, p[i]-c*tr);
       L = L + max(0,p[i]-c*tr);
       //printf("2 %d %d %d\n", L, x, p[i]-c*tr);
       R = R + max(0,p[n-1-i]-c*tl);
   }
   //L>R?(printf("Limak")):(L=R?(printf("Tie")):(printf("Radewoosh")));
   if (L>R)
     printf("Limak");
   else
     (L=R)?printf("Tie"):printf("Radewoosh");

   return 0;
}
