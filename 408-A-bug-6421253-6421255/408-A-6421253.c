#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j, n, k[100], x, sec, min = 100000;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &k[i]);

    for (i = 0; i < n; i++)
    {
        sec = k[i]*15;
        for (j = 0; j < k[i]; j++)
        {
            scanf("%d", &x);
            sec += x*5;
        }
        printf("%d\n", sec);
        if (sec < min)
            min = sec;
    }
    printf("%d\n", min);

    return 0;
}
