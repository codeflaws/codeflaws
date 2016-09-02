#include<stdio.h>
int main(int argc, char *argv[])
{
    int x,y,w,max,ans,n=6;

    scanf("%d%d",&y,&w);

    if(y>=w) max=y;

    else max=w;

    ans=(n-max)+1;
    if(ans%6==0)
    {
        n=n/6;
        ans=ans/6;
    }
    else if(ans%3==0)
    {
        n=n/ans;
        ans=1;

    }
    else if(ans%2==0)
    {
        n=n/ans;
        ans=ans/2;

    }
    printf("%d/%d",ans,n);

    return 0;



}
