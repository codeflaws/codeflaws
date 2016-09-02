#include <stdio.h>
int main(int argc, char *argv[])
{
    int a,b,a1,b1,c=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        if(a>1)
        {
            a1=(a-b)/2;
            printf("%d %d",b,a1);
        }
        else
            printf("%d %d",b,c);
    }
    else
    {
        if(b>1)
        {
            b1=(a-b)/2;
            printf("%d %d",a,b1);
        }
        else
            printf("%d %d",a,c);
    }
    return 0;
}
