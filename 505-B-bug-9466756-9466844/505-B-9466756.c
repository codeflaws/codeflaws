#include<stdio.h>

int d[105][105][105] = {0};
int main(int argc, char *argv[]){
    int n, m;
    int a, b, c;
    int q, u, v;
    int i, j, k, h, tot, yes;
    while(scanf("%d%d", &n , &m)!= EOF){
        for(i = 1; i <= m; i ++){
            for(j = 1; j <= n; j ++){
                for(k = 1; k <= n; k ++){
                    d[i][j][k] = 0;
                }
            }
        }
        int t = m;
        while(t --)
        {
            scanf("%d%d%d", &a, &b, &c);
            d[c][a][b] = 1;
            d[c][b][a] = 1;
        }
        for(i = 1; i <= m; i ++){
            yes = 1;
            while(yes){
            yes = 0;
            for(j = 1; j <= n; j ++){
                for(k = 1; k <= n; k ++){
                    if(d[i][j][k] == 1) {
                        for(h = 1; h <= n; h ++){
                            if(d[i][k][h] == 1 && d[i][j][h] != 1) {
                                d[i][j][h] = 1;
                                d[i][h][j] = 1;
                                printf("i = %d j = %d h = %d\n", i, j, h);
                                yes = 1;
                            }
                        }
                    }
                }
            }
            }
        }
        scanf("%d", &q);
        while(q --){
            tot = 0;
            scanf("%d%d", &u, &v);
            for(i = 1; i <= m; i ++){
                if(d[i][u][v]) tot ++;
            }
            printf("%d\n", tot);
        }
    }
    return 0;
}
