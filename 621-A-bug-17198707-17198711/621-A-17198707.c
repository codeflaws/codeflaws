
#include<stdio.h>
int main(int argc, char *argv[])
{
    long long n,m=99999999999999,i,s=0,d;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&d);
       if(d%2==1&&d<m)
       {
           m=d;
       }
       s=s+d;
    }
    printf("%lld\n",m);
    if(s%2==1)
    {
        s=s-m;
        printf("%lld",s);
    }
    else
 {
     printf("%lld",s);
    }
    return 0;
}
