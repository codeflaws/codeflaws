#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int arr[1000] = {0};
    int n, k, i, j, s = 0, s1 = 0;
    char str[1000][1000];
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++)
        scanf("%s", str[i]);

    for(i = 0; i <= k; i++)
        arr[i] = i;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < strlen(str[i]); j++)
        {
            if(str[i][j] - '0' > k || str[i][j] - '0' < 0)
                break;
            else
                arr[str[i][j] - '0'] = -1;
        }
        for(j = 0; j <= k; j++)
        {
            if(arr[j] == -1)
                s1++;
            arr[j] = j;
        }
        if(s1 == k + 1)
            s++;
        s1 = 0;
    }

    printf("%d", s);

    return 0;
}
