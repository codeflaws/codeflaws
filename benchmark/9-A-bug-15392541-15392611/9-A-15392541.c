#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,ans,d,nu;
    int x;
    scanf("%d%d",&a,&b);
    if(a>b)
        c=a;
    else
        c=b;

    ans=7-c;
    x=6%ans;
    d=6/ans;
    nu=ans/2;



    if((ans%2)==0)
        printf("%d/3",nu);
    else if(x==0)
        printf("1/%d",d);
    else if(x!=0)
        printf("%d/6",ans);
    else if(ans==0)
        printf("0/6");

    return 0;
}
