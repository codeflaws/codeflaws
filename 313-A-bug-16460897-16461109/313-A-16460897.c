#include<stdio.h>
int main(int argc, char *argv[])
{
long long int n,ans;
scanf("%lld",&n);
if(n>=0)
{ans=n;}
else
{
long long int a=n;
a*=-1;
a/=10;
long long int b=n,c;
b*=-1;
c=n%10;
b/=100;
b=b*10+c;
a*=-1;
b*=-1;
if(b>a)
{ans=b;}
else
{ans=a;}
}
printf("%lld",ans);
return 0;
}
