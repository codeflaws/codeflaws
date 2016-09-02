#include <stdio.h>
#include <string.h>

int equial(char a, char b)
{
    if (a == '?' || b == '?' || a == b)
        return 1;
    return 0;
}

int main(int argc, const char *argv[])
{
    char s[401];
    int k, i, j, l, m, flag, result;
    scanf("%s", &s);
    scanf("%d", &k);
    while(k)
    {
        strcat(s, "?");
        k--;
    }

    k = strlen(s);
    for (i = 0; i < k; i++)
        for (j = k-1; j > 0; j--)
            if ((j - i) % 2)
            {
                m = (j - i + 1) / 2;
                flag = 1;
                for (l = i; l < i + m; l++)
                    if (!equial(s[l], s[l + m]))
                    {
                        flag = 0;
                        break;
                    }
                if (flag && (2 * m > result))
                    result = 2 * m;
            }

    printf("%d\n", result);
    return 0;
}
