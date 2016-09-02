#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    if(b%2==1)
    {
        x=b-1;
        x=x/2+1;
    }
    else
    {
        x=b/2;
        x=a-x-1;
    }
    printf("%d",x);

    return 0;
}
