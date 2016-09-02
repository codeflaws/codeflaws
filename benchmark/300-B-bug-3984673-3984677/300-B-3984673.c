#include <stdio.h>
#include <string.h>

#define MAXN 50

int g[MAXN][MAXN];
int c[MAXN];
int v[MAXN];
int ans[MAXN][5];
int len[MAXN];

void recur(int cur, int idx, int *cnt)
{
    int i;
    v[cur] = 1;
    ans[idx][(*cnt) ++] = cur + 1;
    if ((*cnt) > 3)
    {
    return;
    }
    for (i = 0; i < c[cur]; i ++)
    {
    if (v[g[cur][i]] == 0)
    {
        recur(g[cur][i], idx, cnt);
        if ((*cnt) > 3)
        {
        return;
        }
    }
    }
}

void solve(int n)
{
    int i, j, size, cnt, cntone, cnttwo;
    memset(v, 0, n * sizeof(int));
    for (i = j = 0; i < n; i ++)
    {
    if (v[i] == 0)
    {
        cnt = 0;
        recur(i, j, &cnt);
        if (cnt > 3)
        {
        printf("-1\n");
        return;
        }
        len[j ++] = cnt;
    }
    }
    size = j;
    cntone = cnttwo = 0;
    for (i = 0; i < size; i ++)
    {
    if (len[i] == 1)
    {
        cntone ++;
    }
    else if (len[i] == 2)
    {
        cnttwo ++;
    }
    }
    if (cnttwo != 0 && cntone != cnttwo)
    {
    printf("-1\n");
    return;
    }
    memset(v, 0, size * sizeof(int));
    for (i = 0; i < size; i ++)
    {
    if (len[i] == 2)
    {
        for (j = 0; j < size; j ++)
        {
            if (v[j] == 0 && len[j] == 1)
            {
            printf("%d ", ans[j][0]);
                v[j] = 1;
            break;
            }
        }
        printf("%d %d\n", ans[i][0], ans[i][1]);
    }
    }
    for (i = 0; i < size; i ++)
    {
    if (len[i] == 3)
    {
        for (j = 0; j < 2; j ++)
        {
        printf("%d ", ans[i][j]);
        }
        printf("%d\n", ans[i][j]);
    }
    }
    for (i = j = 0; i < size; i ++)
    {
    if (v[i] == 0 && len[i] == 1)
    {
        if (j < 2)
        {
        printf("%d ", ans[i][0]);
        }
        else
        {
        printf("%d\n", ans[i][0]);
        }
        j = (j + 1) % 3;
    }
    }
}

int main(int argc, char *argv[])
{
    int n, m, i, a, b;
    while (scanf("%d%d", &n, &m) == 2)
    {
    memset(c, 0, n * sizeof(int));
    for (i = 0; i < m; i ++)
    {
        scanf("%d%d", &a, &b);
        g[a - 1][c[a - 1] ++] = b - 1;
        g[b - 1][c[b - 1] ++] = a - 1;
    }
    solve(n);
    }
    return 0;
}