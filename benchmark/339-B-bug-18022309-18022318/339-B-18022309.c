#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,a,k=1;
    long long b=0;
    scanf("%d",&n,&m);
    while(m>0)
    {
        scanf("%d",&a);
        if(a>=k)
            b+=a-k;
        else
            b+=n-k+a;
        k=a;
    m--;    
    }
    printf("%lld",b);
    return 0;
}