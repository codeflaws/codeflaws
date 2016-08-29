#include <stdio.h>

int main(int argc, char *argv[]){
        int input[3][3];
        int output[3][3];

        int i, j;

        for (i=0; i<3; i++){
                for (j=0; j<3; j++){
                        scanf("%d",&input[i][j]);
                }
        }
        output[0][0] = (1+ input[0][0] + input[0][1] + input[1][0]) % 2;
        output[0][1] = (1+ input[0][0] + input[0][1] + input[0][2] + input[1][1]) % 2;
        output[0][2] = (1+ input[0][1] + input[0][2] + input[1][2]) % 2;
        output[1][0] = (1+ input[0][0] + input[1][0] + input[1][1] + input[2][0]) % 2;
        output[1][1] = (1+ input[0][1] + input[1][2] + input[1][0] + input[1][1] + input[2][1]) % 2;
        output[1][2] = (1+ input[0][2] + input[1][2] + input[1][1] + input[2][2]) % 2;
        output[2][0] = (1+ input[1][0] + input[2][0] + input[2][1]) % 2;
        output[2][1] = (1+ input[2][0] + input[2][1] + input[1][1] + input[2][2]) % 2;
        output[2][2] = (1+ input[1][2] + input[2][1] + input[2][2]) % 2;

        for (i=0; i<3; i++){
                printf("%d %d %d\n",output[i][0],output[i][1],output[i][2]);
        }

        return 0;
}