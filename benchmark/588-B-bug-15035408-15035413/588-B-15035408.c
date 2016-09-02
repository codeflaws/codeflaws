#include <stdio.h>
int main(int argc, char *argv[])
{
long long n,i;
scanf("%lld",&n);
for( i=1000000;i>1;i--)
while(n%(i*i)==0)
n=n/i;
printf("%d",n);
return 0;
}