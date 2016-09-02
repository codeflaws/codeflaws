#include<stdio.h>
int main(int argc, char *argv[])
{
    long long r1,r2,c1,c2,s1,s2;
    scanf("%lld%lld%lld%lld%lld%lld",&r1,&r2,&c1,&c2,&s1,&s2);
    long long a,b,c,d,ar[5],j=0,i;
    a=(c1+s1-r2)/2;
    b=(c2+s2-r2)/2;
    c=c1-a;
    d=s1-a;
    if(a==b || a==c || a==d || b==c || b==d || c==d || a==0 || b==0 || c==0 || d==0)
    printf("-1\n");
    else
    {
        printf("%lld %lld\n",a,b);
        printf("%lld %lld\n",c,d);
    }
    return 0;
}