#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char F, M, S;
    F = getchar();
    while (getchar() != '\n')
        ;
    M = getchar();
    while (getchar() != '\n')
        ;
    S = getchar();
    if (F != M && M != S && F != S) {
        printf("?\n");
        return 0;
    }

    if ((F == 'r' && M == 's' && S == 's') || (F == 's' && M == 'p' && S == 'p') || (F == 'p' && M == 'r' && S == 'r')) {
        printf("F\n");
        return 0;
    }
    if ((M == 'r' && F == 's' && S == 's') || (M == 's' && F == 'p' && S == 'p') || (M == 'p' && F == 'r' && S == 'r')) {
        printf("M\n");
        return 0;
    }
    if ((S == 'r' && M == 's' && F == 's') || (S == 's' && M == 'p' && F == 'p') || (S == 'p' && M == 'r' && F == 'r')) {
        printf("F\n");
        return 0;
    }
    printf("?\n");
    return 0;
}
