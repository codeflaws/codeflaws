#include<stdio.h>>
int main(int argc, char *argv[])
{
    int x,a,b,c,d,e,f,g,h,ans;
    scanf("%d",&x);
    a=x/5;
    b=x%5;
    c=b/4;
    d=b%4;
    e=d/3;
    f=d%3;
    g=f/2;
    h=g%2;
    ans=a+c+e+g+h;
    printf("%d",ans);

return 0;
}
