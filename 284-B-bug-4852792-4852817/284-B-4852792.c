#include <stdio.h>

int main(int argc, char *argv[])
{
    int couA, couI, couF, n;
    char ch;

    couA = couI = couF = 0;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        ch = getchar();
        if (ch == 'A')
            couA++;
        else if (ch == 'I')
            couI++;
        else
            couF++;
    }

    if (couI)
    {
        if (couA || couF)
            printf("%d", couI);
        else
            printf("0");
    }
    else
    {
        printf("%d", couA);
    }

    return 0;
}
