#include <stdio.h>

int main(int argc, char *argv[])
{
        int a, b, c, d, e;
        char ZA[10][11];

        scanf("%d%d", &a, &b);
        for (c = 0; c < a; ++c)
                scanf("%s", ZA[c]);
        e = 0;
        for (c = 0; c < a; ++c)
                for (d = 0; d < b; ++d)
                        if (ZA[c][d] == 'W')
                                if (d > 0 && ZA[c][d - 1] == 'P') {
                                        ZA[c][d - 1] = '.';
                                        e += 1;
                                } else if (c < a - 1 && ZA[c + 1][d] == 'P') {
                                        ZA[c + 1][d] = '.';
                                        e += 1;
                                } else if (d < a - 1 && ZA[c][d + 1] == 'P') {
                                        ZA[c][d + 1] = '.';
                                        e += 1;
                                } else if (c > 0 && ZA[c - 1][d] == 'P') {
                                        ZA[c - 1][d] = '.';
                                        e += 1;
                                }
        printf("%d\n", e);

        return 0;
}
