#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n=0;
    scanf("%d",&n);
    if(n==1 || n==2)
        printf("-1");
    else
    {
        int a[n+1];
        int i=0;
        for(i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
