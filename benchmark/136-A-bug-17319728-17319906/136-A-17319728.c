#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,x,n,j;
  scanf("%d",&n);
  int a[n];

  for(i=1;i<=n;i++)
   {
scanf("%d",&x);
a[x]=i;
   }
for(j=1;j<=n;j++)
{
printf("%d",a[j]);
}
    return 0;
}