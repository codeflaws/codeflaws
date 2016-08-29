#include<stdio.h>
#include<stdlib.h>
long long a[100005];
long long gcd(long long a,long long b)
{
    return b==0?a:gcd( b, a%b );
}
int comp(const void *a,const void *b)
{
return *(long long*)a-*(long long *)b;
}
int main(int argc, char *argv[])
{
    long long n,i,sum=0,s,b,yue,l;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
    sum+=a[i];
    qsort(a,n,sizeof(long long ),comp);
    for(i=0;i<n;i++)
    printf("%lld   ",a[i]);
    s=0;b=n-1;
    l=n;
    while(s<b)
    {
        sum+=2*(l-1)*(a[b]-a[s]);
        s++;b--;l-=2;
    }
    printf("%lld\n",sum);
    yue=gcd(sum,n);
    printf("%lld %lld\n",sum/yue,n/yue);
    return 0;

}
