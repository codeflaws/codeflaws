#include <stdio.h>
//#include <conio.h>
#include <math.h>

int min(int a, int b)
{
    return a > b ? b : a;
}

int main(int argc, char *argv[])
{
    int m, n;
    scanf("%d %d", &m, &n);
    int k;
    if (m == n)
        k = 1 + 2 * (n - 1);
    else
        k = 1 + 2 * (min(m, n) - 1) + abs(m-n);
    printf("%d\n", k);
    int i, j;
    if (m > n)
    {
        i = 1; j = 1; 
        while (1)
        {
            if (i <= m && j <= n)
            {
                printf("%d %d\n", i, j); i++;
            }
            else break;
            
            if (i <= m && j <= n)
            {
                printf("%d %d\n", i, j); j++;
            }
            else break;
        }
        for (i = n + 2; i <= m; i++)
            printf("%d %d\n", i, n);
    }
    else
    {
        i = 1; j = 1;
        while (1)
        {

            if (i <= m && j <= n)
            {
                printf("%d %d\n", i, j); j++;
            }
            else break;
            if (i <= m && j <= n)
            {
                printf("%d %d\n", i, j); i++;
            }
            else break;
        }
        for (i = m + 2; i <= n; i++)
            printf("%d %d\n", i, m);
    }

    return 0;

}
