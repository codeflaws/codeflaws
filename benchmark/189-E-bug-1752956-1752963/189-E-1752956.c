#include <stdio.h>
#define MAXN 100000
#define MAXM 200000
#define inf 1000000000

FILE *in;

int b[MAXN], s[2 * MAXM][2], n, m, k, pos, volunt[MAXN], st, t;

void add(int x, int y)
{
    s[pos][0] = y;
    s[pos][1] = b[x];
    b[x] = pos++;
}

void read_n(void)
{
    fscanf(in, "%d%d%d", &n, &m, &k);
    int i;
    for(i = 0; i < k; ++i){
        int x;
        fscanf(in, "%d", &x);
        volunt[i] = --x;
    }
    for(i = 0; i < n; ++i){
        b[i] = -1;
    }
    for(i = 0; i < m; ++i){
        int x, y;
        fscanf(in, "%d%d", &x, &y);
        --x;
        --y;
        add(x, y);
        add(y, x);
    }
    fscanf(in, "%d%d", &st, &t);
    --st;
    --t;
}

int d[MAXN], q[2 * MAXN], l, r;

void calc_d(void)
{
    int i;
    for(i = 0; i < n; ++i){
        d[i] = inf;
    }
    l = r = 0;
    for(i = 0; i < k; ++i){
        d[volunt[i]] = 0;
        q[r++] = volunt[i];
    }
    q[r++] = t;
    while(r != l){
        int v = q[l++], p = b[v];
        while(p != -1){
            if(d[s[p][0]] == inf){
                d[s[p][0]] = d[v] + 1;
                q[r++] = s[p][0];
            }
            p = s[p][1];
        }
    }
}

int c[MAXN], col;

void go(int v, int g)
{
    c[v] = col;
    int p = b[v];
    while(p != -1){
        if(c[s[p][0]] != col && d[v] + d[s[p][0]] + 1 <= g){
            go(s[p][0], g);
        }
        p = s[p][1];
    }
}

int can(int g)
{
    ++col;
    go(st, g);
    return c[t] == col;
}

void solve(void)
{
    int l = 1, r = n - 1, m;
    while(r - l > 1){
        m = (l + r) / 2;
        if(can(m)){
            r = m;
        } else {
            l = m + 1;
        }
    }
    if(can(l)){
        printf("%d", l);
    } else if(can(r)){
        printf("%d", r);
    } else {
        printf("-1");
    }
}

int main(int argc, char *argv[])
{
    in = stdin;//fopen("input.txt", "r");
    read_n();
    calc_d();
    solve();
    //fclose(in);
    return 0;
}
