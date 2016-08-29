#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    if(n==1)
        printf("-1");
    else
    {
        for(i=n;i>0;i--)
            printf("%d ",i);
    }
    return 0;
}
