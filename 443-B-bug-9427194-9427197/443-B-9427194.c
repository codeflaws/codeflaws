#include <stdio.h>
//#include <conio.h>
#include <string.h>

int ktra(char s[], int start, int end, int u, int n)
{
    int i;
    for (i = start; i < start + u; i++)
    {
        if (s[i] != s[i + u] && i + u <= n - 1)
            break;
    }
    if (i >= start + u)
        return 1;
    else return 0;
}

int kqua(char s[], int k)
{
    int n, u, start, end;
    n = strlen(s);
    u = (n + k) / 2;
    if (n > k)
    {
        for (; u >= k; u--)
        {
            start = 0; end = 2*u - 1;
            while (end <= n + k - 1)
            {
                if (ktra(s, start, end, u, n))
                    break;
                else
                {
                    start++; end++;
                }
            }
            if (end <= n + k - 1)
                return 2 * u;
        }
    }
    else return 2 * u;
}


int main(int argc, char *argv[])
{
    char s[100];
    int k;
    scanf("%s", &s);
    scanf("%d", &k);
    printf("%d", kqua(s, k));
    return 0;
}
