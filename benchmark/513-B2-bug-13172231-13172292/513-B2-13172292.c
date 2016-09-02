/*
 *    Homework -  NCTU DCS CP
 *    =======================
 *    Student ID :    0316218
 *    GCC Option :   -std=c99
 *    -Wall -Wextra -pedantic
 */

#include<stdio.h>
#include<stdlib.h>

int p[50] = {0};
long long int m;

void permutation(int, int, int);

int main(int argc, char *argv[])
{
    int n;

    scanf("%d %lld", &n, &m);

    permutation(n, 0, n - 1);

    exit(EXIT_FAILURE);
}

void permutation(int n, int l, int r)
{
    int k = n + l - r;

    if (l == r)
    {
        if (--m == 0)
        {
            int i;

            p[l] = k;
            for (i = 0; i < n; i++)
                printf("%d%c", p[i], (i != n - 1) ? ' ' : 0);

            exit(EXIT_SUCCESS);
        }
        else if (m < 0)
        {
            return;
        }
    }
    else
    {
        if (r - l > 1 && m > (1LL << (r - l - 1)))
            p[l] = k, p[l + 1] = k + 1, m -= (1LL << (r - l - 1));
        else
            p[l] = k, permutation(n, l + 1, r);

        if (r - l > 1 && m > (1LL << (r - l - 1)))
            p[r] = k, p[r - 1] = k + 1, m -= (1LL << (r - l - 1));
        else
            p[r] = k, permutation(n, l, r - 1);
    }
}
