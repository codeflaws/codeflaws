#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int a[101][6];
 int m,n,i,k,vt,j,min;
 scanf("%d",&n);
 for (i=1;i<=n;i++)
 {
   for (j=1;j<=4;j++)
        scanf("%d",&a[i][j]);
   a[i][5]=1;
 }
 for (i=1;i<=n;i++)
    for (k=1;k<=n;k++)
      if(k!=i)
      {
          a[i][5]=0;
          for(j=1;j<=3;j++)
             if (a[i][j]>=a[k][j])
             {
               a[i][5]=1;
               break;
             }
          if((k!=i) && (a[i][5]==0))
                break;
      }
 for(i=1;i<=n;i++)
   if (a[i][5]==1)
   {
     vt=i;
     min=a[i][4];
     break;
   }
 for(i=1;i<=n;i++)
   if (a[i][5]==1 && a[i][4]<min)
   {
       min=a[i][4];
       vt=i;
   }
printf("%d",vt);
return 0;
}
