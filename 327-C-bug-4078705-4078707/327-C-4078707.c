#include<stdio.h>
#define M 1000000007
long long power(long long b,long long e)
{
        if(e==1)
        return b;
        long long k=power(b,e/2);
        k=(k*k)%M;
        if(e%2)
        k=(k*b)%M;
        return k;
}
long long getinverse(long long i)
{
        return power(i,M-2)%M;
}
int main(int argc, char *argv[])
{
        long long i=1,c,l=0,n,j;
        long long a;
        while((c=getchar())!='\n')
        {
                if(c=='0'||c=='5')
                l=(l+i)%M;
                i=(i*2)%M;
        }
        scanf("%lld",&n);
        j=(M+power(i,n)-1)%M;
        l=(l*j)%M;
        i=getinverse((M+i-1)%M);
        printf("%lld\n",((long long)l*i)%M);
        return 0;
}
