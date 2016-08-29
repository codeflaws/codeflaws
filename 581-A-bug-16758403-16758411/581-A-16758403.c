#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d ",b);
        c=(a-b)/2;
        printf("%d",c);

    }
    else
    {
        printf("%d",a);
        c=(b-a)/2;
        printf("%d",c);
    }
return 0;
}
