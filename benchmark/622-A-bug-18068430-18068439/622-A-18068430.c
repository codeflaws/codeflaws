#include<stdio.h>
int main(int argc, char *argv[])
{
    long long n,i=1,k;
    scanf("%I64d",&n);

    while(1)
    {
       n=n-i;
       if(n<=0) break;
       i++;
       k=n;
    }
    printf("%I64d",k);
    return 0;
}
