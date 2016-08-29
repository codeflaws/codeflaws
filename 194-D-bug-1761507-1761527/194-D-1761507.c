#include <stdio.h>

FILE *in;

long long r, max_ans = -9223372036854775807LL;
int t[30];
int a[31], b[31], pows[31][31], a2[31], a3[31];
long long k[31];
int u, n;

void check(int stp)
{
    int i, j;
    int cnt = 0;
    for(i = 1; i <= n; ++i){
        a2[i] = a[i];
    }
    for(i = 0; i < stp; ++i){
        if(t[i] == 0){
            if(cnt != 0){
                for(j = 1; j <= n; ++j){
                    a3[j] = a2[pows[cnt][j]] + cnt * r;
                }
                for(j = 1; j <= n; ++j){
                    a2[j] = a3[j];
                }
            }
            for(j = 1; j <= n; ++j){
                a2[j] ^= b[j];
            }
            cnt = 0;
        } else {
            ++cnt;
        }
    }
    if(cnt != 0){
                for(j = 1; j <= n; ++j){
                    a3[j] = a2[pows[cnt][j]] + cnt * r;
                }
                for(j = 1; j <= n; ++j){
                    a2[j] = a3[j];
                }
    }
    long long tmp, ans = 0;
    for(i = 1; i <= n; ++i){
        tmp = a2[i];
        ans += tmp * k[i];
    }
    if(ans > max_ans){
        max_ans = ans;
    }
}

void go(int i)
{
    if(i > 0 && (u - i) % 2 == 0) {
        check(i);
    }
    if(i == u){
        return;
    }
    t[i] = 1;
    go(i + 1);
    if(i == 0 || (i >= 1 && t[i - 1] == 1)){
        t[i] = 0;
        go(i + 1);
    }
}

void count_pows(void)
{
    int i, j;
    for(i = 2; i <= 30; ++i){
        for(j = 1; j <= n; ++j){
            pows[i][j] = pows[i - 1][pows[1][j]];
            //printf("%d ", pows[i][j]);
        }
        //printf("\n");
    }
}

int main(int argc, char *argv[])
{
    in = stdin; //fopen("input.txt", "r");
    fscanf(in, "%d%d%lld", &n, &u, &r);
    int i;
    for(i = 1; i <= n; ++i){
        fscanf(in, "%d", &a[i]);
    }
    for(i = 1; i <= n; ++i){
        fscanf(in, "%d", &b[i]);
    }
    for(i = 1; i <= n; ++i){
        fscanf(in, "%lld", &k[i]);
    }
    for(i = 1; i <= n; ++i){
        fscanf(in, "%d", &pows[1][i]);
    }
    count_pows();
    go(0);
    printf("%lld", max_ans);
    return 0;
}
