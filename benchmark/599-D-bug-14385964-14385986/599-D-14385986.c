#include <stdio.h>
#include <math.h>
long long int n,i,d[100000],r[100000],sl,da,x,v1,v2,j;
int main(int argc, char *argv[])
{
    scanf("%lld",&n);
    i=1;
    sl=0;
    j=(long long int) sqrt(n);
    if (j>10000000) j=10000000;
    while (i<=j)
    {
        if ((6*n)%i==0)
        {
            x=i;
            v1=(n-((x-1)*x/2)*(2*x-1)/3+((x-1)*x/2)*x);
            v2=(x*x-(x-1)*x/2);
            da=v1/v2;
            if (da>=i && (x*x*da-((x-1)*x/2)*(x+da)+((x-1)*x/2)*(2*x-1)/3)==n)
            {
                sl++;
                d[sl]=da;
                r[sl]=i;
            }
            if (da<i) break;
        }
        i++;
    }
    if (d[sl]==r[sl])
    printf("%lld\n",2*sl-1);
    else printf("%lld\n",2*sl);
    for (i=1;i<=sl;i++)
        printf("%lld %lld\n",r[i],d[i]);
    if (d[sl]==r[sl]) sl--;
    for (i=sl;i>=1;i--)
        printf("%lld %lld\n",d[i],r[i]);
    return 0;
}
