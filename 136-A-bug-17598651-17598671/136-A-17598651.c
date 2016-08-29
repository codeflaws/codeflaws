#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    int s[100];

    for (i=0;i<n;i++)
    {
        int m;
        scanf("%d",&m);
        s[m]=i+1;
    }
    for (i=1;i<=n;i++)
    {
        printf("%d",s[i]);
    }
    return 0;
}