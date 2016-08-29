#include <stdio.h>
int main(int argc, char *argv[]){
    int x, t, a, b, da, db, i, j, m, n, flag;
    while(scanf("%d %d %d %d %d %d", &x, &t, &a, &b, &da, &db) == 6){
        if(x == 0){
            printf("YES\n");
            continue;
        }
        flag = 0;
        for(i = 0; i < t; i++){
            if(flag == 1)
                break;
            m = a - i * da;
            for(j = 0; j <= t; j++){
                n = b - j * db;
                if((m + n == x) || m == x || n == x){
                    printf("YES\n");
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
            printf("NO\n");
    }
    return 0;
}
