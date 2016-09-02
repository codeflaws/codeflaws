#include <stdio.h>

int ok = 0, sol[8];

typedef struct po {
   int x, y;
} point;

point tab[8];

int prp(b,a,c)
{
   int xa = tab[a].x, ya = tab[a].y;
   int xb = tab[b].x, yb = tab[b].y;
   int xc = tab[c].x, yc = tab[c].y;
   double a1, a2;
   if (xa != xb && xa != xc)
   {
      a1 = ((double) ya-yb)/((double) xa-xb);
      a2 = ((double) ya-yc)/((double) xa-xc);
      if (a1*a2 + 1.0 < 0.0000001 && a1*a2 + 1.0 > -0.0000001)
         return 1;
      else
         return 0;
   }
   if (xa == xb && ya == yc)
      return 1;
   if (xa == xc && ya == yb)
      return 1;
   return 0;
}

int rect(int a[4])
{
   if (prp(a[0], a[1], a[2]) && prp(a[1], a[2], a[3]) && prp(a[2], a[3], a[0]) && prp(a[3], a[0], a[1]) ||
       prp(a[0], a[1], a[3]) && prp(a[1], a[3], a[2]) && prp(a[3], a[2], a[0]) && prp(a[2], a[0], a[1]))
      return 1;
   else
      return 0;
}

int len(a,b,c)
{
   int xa = tab[a].x, ya = tab[a].y;
   int xb = tab[b].x, yb = tab[b].y;
   int xc = tab[c].x, yc = tab[c].y;
   double lab = (xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
   double lac = (xa-xc)*(xa-xc)+(ya-yc)*(ya-yc);
   double lbc = (xb-xc)*(xb-xc)+(yb-yc)*(yb-yc);
   if (lab - lac < 0.0000001 && lac - lab < 0.0000001)
      return 1;
   if (lbc - lac < 0.0000001 && lac - lbc < 0.0000001)
      return 1;
   if (lbc - lab < 0.0000001 && lab - lbc < 0.0000001)
      return 1;
   return 0;
}

int sq(int a[4])
{
   if (len(a[0], a[1], a[2]) && len(a[1], a[2], a[3]))
      return 1;
   else
      return 0;
}

void test(int a[4])
{
   if (ok)
      return;
   int i, j, k=0;
   if (rect(a))
      if (sq(a))
      {
         int b[4];
         for (i=0; i<8; i++)
         {
            int to = 1;
            for (j=0; j<4; j++)
               if (i == a[j])
                  to = 0;
            if (to)
               b[k++] = i;
         }
         if (rect(b))
         {
            ok = 1;
            for (i=0; i<4; i++)
            {
               sol[i] = a[i];
               sol[i+4] = b[i];
            }
         }
      }
   return;
}

int main(int argc, char *argv[])
{
   int i, j, k, l;
   for (i=0; i<8; i++)
      scanf("%d %d", &tab[i].x, &tab[i].y);
   for (i=0; i<5; i++)
      for (j=i+1; j<6; j++)
         for (k=j+1; k<7; k++)
            for (l=k+1; l<8; l++)
            {
               int s[4] = {i,j,k,l};
               test(s);
            }
   if (ok)
   {
      printf("YES\n");
      for (i=0; i<8; i++)
         printf("%d%c", sol[i]+1, i%4 != 3 ? ' ' : '\n');
   }
   else
      printf("NO\n");
   return 0;
}
