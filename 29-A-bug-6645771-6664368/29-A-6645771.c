#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
   int n, *d, *x,i,j,c;
   while(n<1 || n>100)
   {
      scanf("%d",&n);
   }
   x=(int*)malloc((n+1)*sizeof(int));
   d=(int*)malloc((n+1)*sizeof(int));

   for (i=0; i<n; i++)
   {
      scanf("%d%d",x+i,d+i);
   }

   for (i=0; i<n; i++)
   {
      for (j=0; j<n; j++)
      {
         if(i!=j)
         {
            if(x[i]+d[i]== x[j] && x[j]+d[j]==x[i])
            {
               c=1;
               j=n;
               i=n;
            }
            else
               c=0;
         }
      }
   }
   if(c==1)
      printf("SI");
   else
      printf("NO");
    return 0;
}
