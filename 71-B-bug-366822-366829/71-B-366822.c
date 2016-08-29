#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
 int n,k,t,i;
long res=0;
int mod=0;
int temp=0;
scanf("%d%d%d",&n,&k,&t);
res =(n*k*t)/100;
mod = res % k;
temp = res/k;
for(i=0;i<temp;i++)
printf("%d ",k);
printf("%d ",mod);
for(i=(temp+2);i<=n;i++)
printf("0 ");


return 0;
}
