
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, m, x, y, i;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i <n; i++){
        scanf("%d", &ara[i]);
    }
    for(i = 0; i <n; i++){
        printf("%d   ", ara[i]);
    }
    scanf("%d", &m);
    for(i = 1; i <= m; i++){
        scanf("%d%d", &x, &y);
        if(x ==1){
            ara[x] = ara[x] + ara[x-1]-y;
        }
        else if(x==n){
                ara[x-2] = ara[x-2]  + y-1;
        }
        else {
            ara[x-2] = ara[x-2] + y-1;
            ara[x] = ara[x] + ara[x-1] - y;
        }
        ara[x-1] = 0;
    }
    for(i = 0; i <n; i++){
        printf("%d\n", ara[i]);
    }
    return 0;
}
