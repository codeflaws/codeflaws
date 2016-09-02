#include <stdio.h>

int main(int argc, char *argv[])
{
    int a1, a2;

    scanf("%d%d", &a1, &a2);

    long result = 0;

    while (a1 > 0 && a2 > 0)
    {
        result++;
        if (a1 <= 2) { a1++; a2 -= 2; }
        else { a2++; a1 -= 2; }
    }

    printf("%ld\n", result);
return 0;
}
