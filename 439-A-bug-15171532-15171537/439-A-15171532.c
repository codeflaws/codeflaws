#include<stdio.h>
int main(int argc, char *argv[])
{
int n,d,i,sum=0,sum1=0,q;
scanf("%d%d",&n,&d);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum+=a[i];
sum1=sum+(n-1)*10;
if(sum1>d)
printf("0");
else
{
d=d-sum;
q=d/5;
printf("%d",q);
}
return 0;
}