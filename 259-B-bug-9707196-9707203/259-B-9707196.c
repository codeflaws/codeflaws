#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char *argv[]) {
    int mat[3][3] = {0};
    int val;
    int i, j;

    for( i = 0; i < 3; i++ ){
        for( j = 0; j < 3; j++ ){
            scanf("%d", &mat[i][j] );
        }
    }
    do{
        mat[0][0]++;
        val = mat[0][0]+ mat[0][1]+mat[0][2];
        mat[1][1] = val -( mat[0][1] + mat[2][1] );
        mat[2][2] = val -( mat[2][0] + mat[2][1] );
        printf("%d", mat[0][0]);
    }while( ( mat[0][0] + mat[1][1] + mat [2][2] ) != val );
    for( i = 0; i < 3; i++ ){
        for( j = 0; j < 3; j++ ){
            printf("%d ", mat[i][j] );
        }
        printf("\n");
    }
    return (0);
}

