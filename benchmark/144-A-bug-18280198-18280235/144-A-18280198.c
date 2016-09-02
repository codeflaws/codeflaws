#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int L, b, c, i, arr[105], Amax=0, Alow=999, m, n, res=0;
    scanf("%d", &L);
    for (i=1; i<=L; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=1; i<=L; i++)
    {
        if (Amax<=arr[i])
        {
            Amax=arr[i];
            n=i;
        }
    }
    for (i=1; i<=L; i++)
    {
        if (Amax>=arr[i])
        {
            Amax=arr[i];
            m=i;
        }
    }
    if (n>m)
    {
        m++;
    }
    res=(n-1)+(L-m);
    printf("%d", res);
    return 0;
}
