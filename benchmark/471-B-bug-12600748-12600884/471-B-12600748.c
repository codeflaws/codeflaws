#include<stdio.h>
int i, j, k, l, x, y, z, n, p = 0, q;
int ara[3000], ara_2[3000], ara_3[3000][2];
int main(int argc, char *argv[])
{
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d", &ara[i]);
        ara_2[i] = ara[i];
    }

    ara[0]= -100;
    ara_2[0] = -100;
    ara_3[0][0] = -100;
    ara_3[0][1] = -100;

    for(i = 1; i <= n ;i++){
        for(j = i + 1; j <= n; j++){
            if(ara[j] <= ara[i]){
                x = ara[i];
                ara[i] = ara[j];
                ara[j] = x;
            }
        }
    }

    for(i = 1; i < n; i++){
        if(ara[i] == ara[i + 1]){
            p++;
        }
    }

    if(p < 2) printf("NO");

    else{
        printf("YES\n");
        for(i = 1, k = 1; i <= n ; i++, k++){
            for(j = 1; j <= n; j++){
                if(ara[i] == ara_2[j]){
                    ara_2[j]= -1;
                    ara_3[k][0] = j;
                    if(ara[i] == ara[i - 1]) ara_3[k][1] = ara_3[k - 1][0];
                    else ara_3[k][1] = -200;
                    printf("%d ", ara_3[k][0]);
                    break;
                }
            }
        }
        printf("\n");

        for(i = 1, x = 0; i <= n; i++){
            if(ara_3[i][1] > 0 && x == 0){
                x = 1;
                ara_3[i - 1][0] = ara_3[i][0];
                ara_3[i][0] = ara_3[i][1];
                y = i;
            }
        }

        for(i = 1; i <= n ; i++){
            printf("%d ", ara_3[i][0]);
        }
        printf("\n");
        for(i = 1, x = 0; i <= n; i++){
            if(ara_3[i][1] > 0 && x == 0 && i != y){
                x = 1;
                ara_3[i - 1][0] = ara_3[i][0];
                ara_3[i][0] = ara_3[i][1];
            }
        }
        for(i = 1; i <= n ; i++){
            printf("%d ", ara_3[i][0]);
        }

        printf("\n");
    }

    return 0;
}
