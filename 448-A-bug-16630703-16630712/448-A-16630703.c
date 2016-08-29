#include <stdio.h>
int main(int argc, char *argv[])
{
    int a1,a2,a3,b1,b2,b3,n,a,b,t;
    while(1)
    {
        scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
        scanf("%d",&n);
        a=a1+a2+a3;
        b=b1+b2+b3;
        t=0;
        if(a%5==0)
        {
            t+=a/5;
        }
        else
        t+=a/5+1;
        if(b%10==0)
        t+=b/10;
        else
        t+=b/10+1;
        if(t<=n)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
