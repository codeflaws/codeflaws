#include <stdio.h>
//#include <conio.h>


int main(int argc, char *argv[])
{
    int n, m, a[3001], b[3001], i, j, s = 0;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = 1; i <= m; i++)
        scanf("%d", &b[i]);
    i = 1, j = 1;
    while (i <= n && j <= m)
    {
        if (b[j] >= a[i])
            i++;
        j++;
    }
    if (j > n && i<=n)
        s = n - i+1;
    printf("%d", s);
    return 0;
}
