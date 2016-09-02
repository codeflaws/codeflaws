#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, m, u1, u2, c1, c2, i, c;
    scanf("%d %d", &n, &m);
    int b[n], g[m];
    for (i = 0; i < n; i++)
        b[i] = 0;
    for (i = 0; i < m; i++)
        g[i] = 0;
    scanf("%d", &u1);
    for (i = 0; i < u1; i++)
    {
        scanf("%d", &c);
        b[c] = 1;
    }
    scanf("%d", &u2);
    for (i = 0; i < u2; i++)
    {
        scanf("%d", &c);
        g[c] = 1;
    }
    for (i = 0; i < n * m * n * m; i++)
    {
        c1 = i % n;
        c2 = i % m;
        if (b[c1] || g[c2])
        {
            b[c1] = 1;
            g[c2] = 1;
        }
    }
    for (i = 0; i < n; i++)
        if (!b[i])
        {
            printf("No");
            return 0;
        }
    for (i = 0; i < m; i++)
        if (!g[i])
        {
            printf("No");
            return 0;
        }
    printf("Yes");
    return 0;
}