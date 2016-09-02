#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    if (n < 2)
        printf("-1");
    else
    {
        printf("2 3");
        for (n -= 2; n > 0; n--)
            printf(" 1");
    }
    return 0;
}