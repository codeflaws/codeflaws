#include <stdio.h>

int main(int argc, char *argv[])
{
    int a1, a2;

    scanf("%d%d", &a1, &a2);

    long result = 0;

    if (a1 == 1 && a2 == 1) goto end;
    while (a1 > 0 && a2 > 0)
    {
        result++;
        if (a1 <= 2) { a1++; a2 -= 2; }
        else { a2++; a1 -= 2; }
    }

end:
    printf("%ld\n", result);
return 0;
}
