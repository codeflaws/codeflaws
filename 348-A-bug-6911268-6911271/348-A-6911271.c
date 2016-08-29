#include <stdio.h>
int main(int argc, char *argv[])
{
    int n;
    long long sum=0;
    long long a,max=0;
    scanf("%d",&n);
    int x=n;
    while(x--)
    {
        scanf("%lld",&a);
        if(a>max)
            max=a;
        sum+=a;
    }
    sum=n*max-sum;
    long long y=!((max-sum)%(n-1)==0);
    if(sum>=max)
        printf("%lld\n",max);
    else
        printf("%lld\n",max+(max-sum)/(n-1)+y);
    return 0;
}
