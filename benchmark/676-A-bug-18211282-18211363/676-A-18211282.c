#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

   int n,j=0,k=0,i;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);

   }
   int min=a[0],max=a[0];
   for(i=1;i<n;i++)
   {
       if(a[i]<min)
       {
           min=a[i];
           j=i;
       }
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
       {
           max=a[i];
           k=i;
       }
    }

   int b[4]={j,k,n-j-1,n-k-1};
   printf("%d %d %d %d\n",b[0],b[1],b[2],b[3]);
   int x,y;
   for(x=0;x<3;x++)
   {
       for(y=x+1;y<4;y++)
       {
           if(b[x]<b[y])
           {
               int t=b[x];
               b[x]=b[y];
               b[y]=t;
           }
       }
   }
  printf("%d",b[0]);


return 0;
}
