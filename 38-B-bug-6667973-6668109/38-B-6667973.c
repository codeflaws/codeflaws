#include <stdio.h>

void recorrer_caballo(char MAT[][8], int x, int y);
void recorrer_torre (char MAT[][8], int x, int y);



int main(int argc, char *argv[]){

int cant=0;
int x_torre, y_torre,i,j;
char pos [3];
char MAT[8][8];


        for (i=0;i<8;i++){
            for (j=0;j<8;j++){

                MAT[i][j] = '0';
            }
        }


        scanf ("%s", pos);
        y_torre = pos[0] - 'a';
        x_torre = pos[1] - '1';

recorrer_torre(MAT, x_torre, y_torre);
recorrer_caballo(MAT, x_torre, y_torre);

        scanf ("%s", pos);
        y_torre = pos[0] - 'a';
        x_torre = pos[1] - '1';

    recorrer_caballo(MAT, x_torre, y_torre);

        for (i=0;i<8;i++){
            for (j=0;j<8;j++){
                if (MAT[i][j] == '0')cant++;
                printf ("%c  ", MAT[i][j]);
            }
            puts ("");
        }

printf ("%d", cant);

return 0;
}


void recorrer_torre (char MAT[][8], int x, int y){

int i,j;


        for (i=0; i<8; i++){

            MAT[i][y] = 'x';

        }

        for (i=0; i<8; i++){

            MAT[x][i] = 'x';

        }
        MAT[x][y] = 'c';

}

void recorrer_caballo(char MAT[][8], int x, int y){


        MAT[x][y] = 'c';
        if ((x-2 >= 0 && y-1 >= 0) ) MAT[x-2][y-1] = 'x';
        if (x-1>= 0 && y-2>= 0) MAT[x-1][y-2] = 'x';
        if ((x+1 < 8 && y+2 < 8 )) MAT[x+1][y+2] = 'x';
        if ((x+2 < 8 && y+1 < 8)) MAT[x+2][y+1] = 'x';
        if ((x+1 < 8 && y-2 >= 0)) MAT[x+1][y-2] = 'x';
        if ((x+2 < 8 && y-1 >= 0)) MAT[x+2][y-1] = 'x';
        if ((x-1 >= 0 && y+2 < 8)) MAT[x-1][y+2] = 'x';
        if ((x-2 >= 0 && y+1 < 8)) MAT[x-2][y+1] = 'x';
}
