#include<stdio.h>
#include<stdlib.h>
#define n 8

char Tablero[n][n];
int mov[n][2]={{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2}};
char columna[8]={'a','b','c','d','e','f','g','h'};
char fila[8]={'8','7','6','5','4','3','2','1'};

void caminoPieza(char *,char *);
int recorrerTablero(void);
int valido(int,int);

int main(int argc, char *argv[])
{
    char Torre[3],Caballo[3];

    scanf("%s",Torre);
    scanf("%s",Caballo);

    caminoPieza(&Torre[0],&Caballo[0]);
    printf("%d",recorrerTablero());

    return 0;
}

void caminoPieza(char *Torre,char *Caballo){
    int i,j,k;

    for(j=0;j<n;j++){if(columna[j]==Torre[0]){break;}}
    for(i=0;i<n;i++){if(fila[i]==Torre[1]){break;}}
    for(k=0;k<n;k++){
        Tablero[i][k]='*';
        Tablero[k][j]='*';
    }
    Tablero[i][j]='T';
    for(j=0;j<n;j++){if(columna[j]==Caballo[0]){break;}}
    for(i=0;i<n;i++){if(fila[i]==Caballo[1]){break;}}
    Tablero[i][j]='C';
    for(k=0;k<n;k++){
        if((i+mov[k][0])>=0 && (i+mov[k][0])<n && (j+mov[k][1])>=0 && (j+mov[k][1])<n && Tablero[i+mov[k][0]][j+mov[k][1]]!='T' && Tablero[i+mov[k][0]][j+mov[k][1]]!='C'){
            Tablero[i+mov[k][0]][j+mov[k][1]]='*';
        }
    }
}

int recorrerTablero(void){
    int i,j,cont=0;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(valido(i,j)==0){
                cont++;
            }
        }
    }
    return cont;
}

int valido(int i,int j){
    int x,y,k,band=0;

    if(Tablero[i][j]!='*' && Tablero[i][j]!='C' && Tablero[i][j]!='T'){
        for(k=0;k<n;k++){
            x=i+mov[k][0];
            y=j+mov[k][1];
            if(x>=0 && x<n && y>=0 && y<n && (Tablero[x][y]=='C' || Tablero[x][y]=='T')){
                band=1;
            }
        }
    }else{
        band=1;
    }
    return band;
}
