#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, i, j, r, ans = 0, s = 0;
    scanf("%d", &n);
    int arr[n + 1][2];
    for (i = 0; i < n; i++)
            scanf("%d %d", &arr[i][0], &arr[i][1]);
    arr[n][0] = 0; arr[n][1] = 0;
    for (i = 0; i < n + 1; i++)
        for (j = 0; j < n + 1 - i - 1; j++)
            if (arr[j][0] > arr[j + 1][0])
            {
                arr[j][0] += arr[j + 1][0];
                arr[j + 1][0] = arr[j][0] - arr[j + 1][0];
                arr[j][0] = arr[j][0] - arr[j + 1][0];
                arr[j][1] += arr[j + 1][1];
                arr[j + 1][1] = arr[j][1] - arr[j + 1][1];
                arr[j][1] = arr[j][1] - arr[j + 1][1];
            }
    int arr1[n + 1][2];
    for (i = 0; i < n + 1; i++)
    {
        arr1[i][0] = arr[i][0];
        arr1[i][1] = arr1[i][1];
    }
    int g = 0;
    for (i = 0; i < n + 1; i++)
        if (arr[i][0] == 0)
        {
            g = i;
            break;
        }
    i = g;
    r = 1;
    while (i >= 0 && i <= n)
        if (arr[i][1] == 0)
            i += r;
        else
        {
            s += arr[i][1];
            arr[i][1] = 0;
            r = -r;
        }
    ans = s;
    i = g;
    s = 0;
    r = -1;
    while (i >= 0 && i <= n)
        if (arr1[i][1] == 0)
            i += r;
        else
        {
            s += arr1[i][1];
            arr1[i][1] = 0;
            r = -r;
        }
    if (s > ans)
        ans = s;
    printf("%d", ans);
    return 0;
}
