#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char board[9][9], none;
    int r, c, k;
    int jam=0, minW=9, minB=9;

    for(r=1; r<9; r++){
        for(c=1; c<9; c++){
            board[r][c] = getchar();
        }
        none = getchar();
    }

    for(r=1; r<9; r++){
        for(c=1; c<9; c++){
            if(board[r][c] == 'W'){
                jam = 0;
                for(k=r-1; k>0; k--){
                    if(board[k][c] != '.'){
                        jam = 1;
                        break;
                    }
                }
                if(jam == 0){
                    if(minW > r-1){
                        minW = r-1;
                    }
                }
            }
            else if(board[r][c] == 'B'){
                jam = 0;
                for(k=r+1; k<9; k++){
                    if(board[k][c] != '.'){
                        jam = 1;
                        break;
                    }
                }
                if(jam == 0){
                    if(minB > 8-r){
                        minB = 8-r;
                    }
                }
            }
        }
    }
    if(minW < minB){
        printf("A\n");
    }
    else{
        printf("B\n");
    }
    //printf("%d %d\n", minW, minB);
    return 0;
}
