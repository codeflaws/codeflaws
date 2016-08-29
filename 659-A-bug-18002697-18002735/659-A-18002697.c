#include<stdio.h>
int main(int argc, char *argv[])
{

    int n,a,b,ans;
    scanf("%d %d %d",&n,&a,&b);
    if(b>=0)
    {
        ans=(b%n)+a;
    }
    else if(b<0)
    {
        if(abs(b)<=n)
        {
            ans=n-abs(b)+a;
            if(ans>n) ans=ans-n;
        }
        if(abs(b)>n)
        {
            b=b%n;
            ans=n-abs(b)+a;
            if(ans>n) ans=ans-n;
        }
    }
    printf("%d",ans);
    return 0;


}
