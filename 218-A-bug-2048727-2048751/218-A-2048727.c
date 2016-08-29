#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,k,a[1000],i,t=1;
    scanf("%d %d", &n, &k);
    for(i=0;i<2*n+1;i++) scanf("%d", &a[i]);
    i=1;
    while (t<=k && i<2*n)
    {
        if (a[i]>a[i-1] && a[i]>a[i+1])
        {
            a[i]--;
            t++;
        }
        i++;
    }
    for(i=0;i<2*n+1;i++) printf("%d ", a[i]);
    return 0;
}
