#include<stdio.h>
int main(int argc, char *argv[])
{
int n,i;
scanf("%d",&n);
if(n>1)
{
for(i=1;i<=n;i++)
{
if(i%2==0)
printf("%d ",i-1);
else
printf("%d ",i+1);
}
}
else
printf("-1");
return 0;
}
