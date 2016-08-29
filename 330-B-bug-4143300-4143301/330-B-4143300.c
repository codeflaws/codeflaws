#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

long int min(long int a, long int b, long int min_a, long int min_b)
{
    if (a < b)
    {
        return min_a;
    }
    else
    {
        return min_b;
    }
}

long int min_(long int v, long int *check, long int *count)
{
    long int min_a = 0, min_ind = 0, i;
    //min_ind = 0;
    for (i = 1; i <= v; i++)
    {
        if (!check[i])
        {
            min_ind = min(min_a, count[i], min_ind, i);
        }
    }
    check[min_ind] = 1;
    return min_ind;
}

int main(int argc, char *argv[])
{
    long int i = 0, count[101] = {0}, count_ = 0, v, not_v, p, a[101][101] = {0}, min_ind, check[101] = {0};
    scanf("%ld%ld", &v, &not_v);
    //p = fork();
    for ( ; i < not_v; i++)
    {
        long int v1, v2;
        scanf("%ld%ld", &v1, &v2);
        count[v1]++;
        count[v2]++;
        a[v1][v2] = a[v2][v1] = -1;
    }
    min_ind = min_(v, check, count);
    count_ = 0;
    while (min_ind != 0)
    {
        for (i = 1; i <= v; i++)
        {
            if (a[min_ind][i] != -1 && i != min_ind )
            {
                a[min_ind][i] = a[i][min_ind] = 1;
                check[i] = 1;
                count_++;
            }
        }
        min_ind = min_(v, check, count);
    }
    printf("%ld\n", count_);
    for (i = 1; i <= v; i++)
    {
        long int j = 1;
        for (j = i; j <= v; j++)
        {
            if (a[i][j] == 1)
            printf("%ld %ld\n", i, j);
        }
    }
    return 0;
}
