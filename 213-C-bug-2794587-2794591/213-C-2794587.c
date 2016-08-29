#include <stdio.h>
#include <stdlib.h>

int n;

int f[300][300];
int d[2][300][300];

void swapd()
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            d[0][i][j] = d[1][i][j];
            d[1][i][j] = 0;
        }
    }
}

void add(int i, int j, int di, int dj, int u, int dw, int s)
{
    int ans = 0;
    if(di >= dw && di <= u && dj >= dw && dj <= u)
    {
        ans = d[0][i][j];
        ans += f[s - di][di];
        if(di != dj)
        {
            ans += f[s - dj][dj];
        }
        if(ans > d[1][di][dj])
        {
            d[1][di][dj] = ans;
        }
    }
}

int main(int argc, char *argv[])
{
    int i, j;
    scanf("%d\n", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &f[j][i]);
            getchar();
        }
    }
    int dw = 0, u = 0;
    d[1][0][0] = f[0][0];
    int s, uc, dc;
    for(s = 1; s < 2 * n - 1; s++)
    {
        swapd();
        dc = dw;
        uc = u;
        if(s <= n - 1)
        {
            u++;
        }
        else
        {
            dw++;
        }
        for(i = dc; i <= uc; i++)
        {
            for(j = dc; j <= uc; j++)
            {
                add(i, j, i + 1, j, u, dw, s);
                add(i, j, i, j + 1, u, dw, s);
                add(i, j, i + 1, j + 1, u, dw, s);
                add(i, j, i, j, u, dw, s);
            }
        }
    }
    printf("%d", d[1][n - 1][n - 1]);
    return 0;
}
