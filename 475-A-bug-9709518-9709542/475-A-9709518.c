#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int n;
    char Bus[4][27];
    int i,j;
    scanf("%d",&n);
    printf("+------------------------+\n");
    for(i=0 ; i<4 ; i++){
        for(j=0 ; j<26 ; j++){
            if (j%2 == 0){
                Bus[i][j]='.';
            }
            if (j%2 == 1){
                Bus[i][j]='#';
            }
            if (j==23){
                Bus[i][j]='|';
            }
            if (i==2){
                Bus[i][j]='.';
            }
        }
    }
    for (i=0 ; i<4  ; i++){
        for(j=0 ; j<27 ; j++){

            if (j%2 == 0){
                Bus[i][j]='.';
            }
            if (j==0){
                Bus[i][j]='|';
            }
            if (j==25){
                Bus[i][j]='|';
            }

            if (i==0  && j==24){
                Bus[i][j]='D';
            }

        }
    }

    for (j=1 ; j<23 ; j+=2){
        for (i=0 ; i<4 ; i++){
            if (n>0){
                if (i==2 && j>1){
                    continue;
                }
                Bus[i][j]='O';
                n--;
                }
            }
    }


    for (i=0 ; i<4 ; i++){
        for (j=0 ; j<26 ; j++){
            printf("%c",Bus[i][j]);
            if ((i==0 || i==3) && j==25 ){
                printf(")");
            }

        }
    printf("\n");
    }

    printf("+------------------------+");


    return 0;
}
