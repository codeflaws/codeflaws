#include <stdio.h>

typedef struct
{
    int x;
    char y;
} pairs;

int main(int argc, char *argv[])
{
    int n, m, i, s, q;
    scanf("%d %d", &n, &m);
    char a[n];
    pairs b[m];
    char c;
    scanf("%c", &c);
    while (c == 10 || c == 13)
        scanf("%c", &c);
    a[0] = c;
    for (i = 1; i < n; i++)
        scanf("%c", &a[i]);
    for (i = 0; i < m; i++)
        scanf("%d %c", &b[i].x, &b[i].y);
    s = 0;
    for (i = 0; i < n - 1; i++)
        if (a[i] == '.' && a[i + 1] == '.')
            s++;
    if (n == 1)
    {
        for (i = 0; i < m; i++)
            printf("%d/n", 0);
        return 0;
    }
    for (i = 0; i < m; i++)
    {
        q = b[i].x - 1;
        if (q == 0)
        {
            if (a[0] == '.' && a[1] == '.' && b[i].y != '.')
                s -= 1;
            else if (a[0] != '.' && a[1] == '.' && b[i].y == '.')
                s += 1;
            a[0] = b[i].y;
        }
        else if (q == n - 1)
        {
            if (a[n - 1] == '.' && a[n - 2] == '.' && b[i].y != '.')
                s -= 1;
            else if (a[n - 1] != '.' && a[n - 2] == '.' && b[i].y == '.')
                s += 1;
            a[n - 1] = b[i].y;
        }
        else
        {
            if (a[q] == '.' && a[q + 1] == '.' && b[i].y != '.')
                s -= 1;
            else if (a[q] != '.' && a[q + 1] == '.' && b[i].y == '.')
                s += 1;
            if (a[q] == '.' && a[q - 1] == '.' && b[i].y != '.')
                s -= 1;
            else if (a[q] != '.' && a[q - 1] == '.' && b[i].y == '.')
                s += 1;
            a[q] = b[i].y;
        }
        printf("%d\n", s);
    }
    return 0;
}