#include<stdio.h>
int main(int argc, char *argv[])
{
    int ix;
    long long int l,r,m,n,x,y,n2,dc,nd2;
    scanf("%I64d",&n);
    if(n<=1)
    {
        if(n==0)
        printf("0");
        else
        printf("4");
        return 0;
    }
    l=1;r=n;nd2=n*n;
    nd2/=2;
    while(l+1<r)
    {
        m=(l+r)/2;
        if(m*m>nd2)
        r=m;
        else
        l=m;
    }
    if(r*r<=nd2)
    x=r;
    else
    x=l;
    
    n2=n*n;
    dc=2*x*x+2*x+1;
    
    ix=x;
    if(dc-n2<=0)
    {
        printf("%d",8*ix+4);
    }
    else
    {
        printf("%d",8*ix);
    }
    return 0;
    
}
