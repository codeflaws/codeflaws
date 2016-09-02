#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,p,i;
    scanf("%d %d",&n,&p);
    int tab[n];
    for (i=0;i<=n-p;i++)
    {
        tab[i]=n-i;
    }
    for (i=p;i<n;i++)
        tab[i]=i-p+1;
     for(i=0;i<n;i++)
        printf("%d ",tab[i]);
    return 0;
}
