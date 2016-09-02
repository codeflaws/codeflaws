#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a,b,c,d,e,sum;
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    if(sum%5==0)
    {
        printf("%d\n",sum/5);
    }
    else
        printf("-1\n");
    return 0;
}
