#include <stdio.h>

#define MAXN    100001

int Flag[MAXN];
char AmbiguityFlag[MAXN];
int Ans[MAXN];

int main(int argc, char *argv[])
{
    int N, M, i, f, b;
    char flagAmbiguity = 0;
    scanf("%d %d", &N, &M);
    for(i = 0; i < N; ++i) {
        scanf("%d", &f);
        if(!Flag[f]) {
            Flag[f] = i + 1;
        } else {
            AmbiguityFlag[f] = 1;
        }
    }
    for(i = 0; i < M; ++i) {
        scanf("%d", &b);
        if(!Flag[b]) {
            puts("Impossible");
            return 0;
        } else {
            if(AmbiguityFlag[b]) {
                flagAmbiguity = 1;
            }
            Ans[i + 1] = Flag[b];
        }
    }
    if(flagAmbiguity) {
        puts("Ambiguity");
        return 0;
    }
    puts("Possible");
    for(i = 1; i <= M; ++i) {
        printf("%d ", Ans[i]);
    }
    puts("");
    return 0;
}