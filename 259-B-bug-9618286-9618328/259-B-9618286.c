#include <stdio.h>

int main(int argc, char *argv[]){
    int i, j, k, l, m, n, sum;
    int a[3][3];

    sum = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    a[1][1] = (a[0][1] + a[0][2] + a[2][0] + a[2][1] - a[1][0] - a[1][2]) / 2;
    a[2][2] = a[0][1] + a[0][2] - a[1][1];
    a[0][0] = (sum / 2) - a[1][1] - a[2][2];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}
