/* *****
* @Codeforce Problem 408A. Line to Cashier
* @author : ckmoonfish
* @Date: 2014.4.10
* @tag: implementation
*******/

#include <stdio.h>

#define MAXN 105
#define INF 10000000000

int main(int argc, char *argv[]){
    int n, second, m, s, k[MAXN];
    int i, j;

    second = INF;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", k+i);
    for(i = 0; i < n; i++){
        s = 0;
        for(j = 0; j < k[i]; j++){
            scanf("%d", &m);
            s += m;
        }
        if(s*5 + k[i]*15 < second)
            second = s*5 + k[i]*15;
    }
    printf("%d", second);
    
    return 0;
}
