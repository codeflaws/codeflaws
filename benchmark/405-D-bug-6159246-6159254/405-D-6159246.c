/* ***
* @codeforces problem 405D. Toy Sum
* @author:ckeling
* @date:2014.3.26
* @tag:greedy, implementation, math
******/

#include <stdio.h>
#include <string.h>
#define MAXN 1000000

int X[MAXN + 1];
int S[MAXN + 1];
int Y[MAXN + 1];

int main(int argc, char *argv[]){
    memset(X, 0, sizeof(X));
    memset(S, 0, sizeof(S));
    memset(Y, 0, sizeof(Y));

    int nx, ny;
    int i;
    scanf("%d", &nx);
    for(i = 0; i < nx; ++i){
        scanf("%d", X+i);
        S[X[i]] = 1;
    }
    ny = 0;
    for(i = 0; i < nx; ++i){
        if(S[X[i]] && !S[MAXN + 1 - X[i]]){
            Y[MAXN + 1 - X[i]] = 1;
            ny++;
       }
    }
    for(i = 1; i < MAXN && ny < nx; ++i){
        if(!S[i] && !S[MAXN + 1 - i]){
            Y[i] = 1;
            ny++;
            Y[MAXN + 1 - i] = 1;
            ny++;
        }
    }
    for(i = 0; i <= MAXN; ++i)
        if(Y[i])
            printf("%d ", i);
    return 0;
}
