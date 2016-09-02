#include<stdio.h>
int main(int argc, char *argv[])
{
int n,a[10000],i,j;
scanf("%d",&n);
for(i=0;i<=n/2;i++)
 if(i!=(n/2))
  printf("%d %d ",i+1,n-i);
 else
  printf("%d",i+1);
return 0;
}
