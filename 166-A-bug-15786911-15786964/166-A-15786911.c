#include <stdio.h>

int main(int argc, char *argv[])
{
    int ara[55][55], i, n, k, j, x, cnt=1;
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &ara[i][0], &ara[i][1]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ara[i][0] < ara[j][0])
            {
                x = ara[i][0], ara[i][0] = ara[j][0], ara[j][0] = x;
                x = ara[i][1], ara[i][1] = ara[j][1], ara[j][1] = x;
            }
            else if(ara[i][0] == ara[j][0])
            {
                if(ara[i][1] < ara[j][1])
                    x = ara[i][1], ara[i][1] = ara[j][1], ara[j][1] = x;
            }
        }
    }
    i = 0;
    while(ara[k-1+i][0] == ara[k+i][0] && ara[k-1+i][1] == ara[k+i][1] && k-1+i<n)
    {
        i++, cnt++;
    }
    i = 0;
    while(ara[k-1+i][0] == ara[k-2+i][0] && ara[k-1+i][1] == ara[k-2+i][1] && k-1+i > 0)
    {
        i--, cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
