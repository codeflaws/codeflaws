// 라인 월드 2

#include <stdio.h>
#define max2(x,y) (x>y?x:y)

int n, a[100010], d[2][100010];

int main(int argc, char *argv[])
{
    int i, print = 0, sum;

    scanf("%d", &n);
    for (i = 1; i <= n; i++) scanf("%d", &a[i]);

    a[0] = -1, d[0][1] = d[1][1] = print = 1;
    for (i = 2; i <= n; i++)
    {
        if (a[i - 1] < a[i]) d[0][i] = d[0][i - 1] + 1;
        else d[0][i] = 1;

        sum = 0;
        if (a[i - 2] + 1 < a[i]) sum = 1, d[1][i] = d[0][i - 2] + 2;
        if (a[i - 1] < a[i]) sum = 1, d[1][i] = max2(d[1][i], d[1][i - 1] + 1);
        if (sum == 0) d[1][i] = 2;

        printf("%d %d\n", d[0][i], d[1][i]);

        print = max2(print, max2(max2(d[0][i], d[0][i - 1] + 1), d[1][i]));
    }
    printf("%d", print);
return 0;
}
