#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 8
#define n (N+1)

int d[8][2]= {{2,1}, {1,2}, {-1, 2}, {-2,1}, {-2,-1}, {-1, -2}, {1,-2}, {2,-1}};
int tablero[n][n];
void  marcar_tablero (int fila , int columna);
void ingresar_posiciones ();
void imprimir_tablero();

int main(int argc, char *argv[]){
    int i, cont=0, y;
    ingresar_posiciones ();
    ingresar_posiciones ();
    for (i=1; i<=8; i++){
        for (y=1; y<=8; y++){
            if (tablero [i][y]!=1) cont ++;
        }
    }
    printf ("%d", cont);
    return 0;
}
void ingresar_posiciones (){
    char posi[2], a;
    int x=0;
    do{
        scanf ("%s", posi);
    }while (strlen (posi)!=2 || (posi [0]<'a' || posi [0]>'h') || ( posi [1]<'1' || posi[1]>'8'));
    a=posi [0]-48;
    marcar_tablero (atoi(&a), atoi (&posi[1]));
}
void marcar_tablero (int fila, int columna){
    static a=0;
    int i;
    if (a==0){
        for (i=1; i<=N ; i++){
            tablero [fila][i]=1;
            tablero [i][columna]=1;
        }
        for (i=0; i<=N; i++){
            if ( ((fila + d[i][0]) >=1) && ((fila + d[i][0])<=N) &&
                 ((columna + d[i][1])>=1) && ((columna + d[i][1])<=N) ){
                tablero [fila + d[i][0]]  [columna + d[i][1]] =1;
            }
        }
        a=1;
    }else{
        if (tablero [fila][columna]!=1) {
                 tablero [fila][columna]=1;
            for (i=0; i<=N; i++){
                if (((fila + d[i][0]) >=1)  && ((fila + d[i][0])<=N) &&
                    ((columna + d[i][1]) >=1) && ((columna + d[i][1])<=N)){
                    tablero [fila + d[i][0]]  [columna + d[i][1]] =1;
                }
            }
        } else ingresar_posiciones;
    }
}

void imprimir_tablero (){
    int i, y;
    for (i=1; i<=N; i++)
        for (y=1; y <=N ; y++) printf ("%d ", tablero[i][y]);

    printf ("\n");
    system ("pause");
}