#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int i;
    if(n<4)
    {
        printf("%d\n", (n+1)/2);
        for(i=1;i<=n;i+=2)
        {
            printf("%d ", i);
        }
    }
    else
    {
        if(n==4)
        {
            for(i=2;i<=n;i+=2)
            {
                printf("%d ", i);
            }
            for(i=1;i<=n;i+=2)
            {
                printf("%d ", i);
            }
        }
        else
        {
            printf("%d\n", n);
            for(i=1;i<=n;i+=2)
            {
                printf("%d ", i);
            }
            for(i=2;i<=n;i+=2)
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}