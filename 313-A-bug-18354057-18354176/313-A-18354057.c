#include<stdio.h>
int main(int argc, char *argv[])
{
    int x,y,n;
    scanf("%d",&n);
    x=n/10;
    y=n/100*10+(n%10);
    if(x>y&&x>n) printf("%d",x);
    else if(y>x&&y>n) printf("%d",y);
    else printf("%d",n);
    return 0;
}
