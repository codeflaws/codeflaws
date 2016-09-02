#include <stdio.h>
#include <string.h>
int path[1005];
int we[11];
int main(int argc, char *argv[])
{
    int i, j, flag = 1, m, k;
    char weight[11], count = 0;
    for(i = 1; i <= 10; i++)
        scanf("%c", weight + i);
    for(i = 1; i <= 10; i++)
    {
        if(weight[i] == '1')
            we[i] = i;
        else we[i] = 0;
    }
    scanf("%d", &m);
    int left, right;
    for(k = 1; k <= 10; k++)
    {
        left = 0; right = 0;
        if(we[k])
        {
            flag=1;
            path[1] = k;
            left += we[k];
        }
        else continue;
    for(i = 2; i <= m; i++)
    {
        flag = 0;
        if(i % 2)
        {
            for(j = 1; j <= 10; j++)
                if((we[j] + left > right) && (j != path[i - 1]) && we[j])
            {
                path[i] = j;
                left += we[j];
                flag = 1;
                break;
            }
        }
        else
        {
            for(j = 1; j <= 10; j++)
                if((we[j] + right > left) && (j != path[i - 1]) && we[j])
            {
                path[i] = j;
                right += we[j];
                flag = 1;
                break;
            }
        }
        if(flag == 0) break;
    }
    if(flag == 1) break;
    }
    if(flag == 0) printf("NO\n");
    else
    {
        printf("YES\n");
        for(i = 1; i < m; i++)
            printf("%d ", path[i]);
        printf("%d\n", path[i]);
    }
    return 0;
}
