#include<stdio.h>
int main(int argc, char *argv[])
{
long int n,k,i;
scanf("%ld %ld",&n,&k);
long int a[n];
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
for(i=n-1;i>=1;i--)
{if(a[i]!=a[i-1])
{break;}}
if(i==0&&a[1]==a[0])
printf("0");
else if(k>i&&k<=n)
printf("%ld",i);
else
printf("-1");
return 0;}

