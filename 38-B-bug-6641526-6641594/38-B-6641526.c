#include <stdio.h>
#include <stdlib.h>


void ponerTorre(int [][8], int[]);
void ponerCaballo(int [][8], int, int);
    
void imprimir(int [][8]);
int verificarTablero(int[][8]);

int main(int argc, char *argv[])
{
    int tablero[8][8] = {0};

    int torre[2] = {0};
    int caballoX = 0, caballoY = 0;
    
    scanf("%c%d\n%c%d", &torre[0], &torre[1], &caballoX, &caballoY);
    
    torre[0]-='a';
    torre[1]-=1;
    caballoX-='a';
    caballoY-=1;
    
/*  printf("Torre: %d %d\nCaballo: %d %d\n", torre[0], torre[1], caballoX, caballoY);*/

    ponerTorre(tablero, torre);
    ponerCaballo(tablero, caballoX, caballoY);
    imprimir(tablero);
/*  if(verificarTablero(tablero))
        printf("\nLas piezas NO se capturan entre si\n");
    else
        printf("\nLas piezas se capturan entre si\n");*/

    int i, j, x, y, cant=0;
    
    int aux[8][8];
    
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            for(x=0; x<8; x++)
                for(y=0; y<8; y++)
                    aux[x][y]=tablero[x][y];
            
            ponerCaballo(aux, i, j);
            
            if(verificarTablero(aux))
                cant++;
        }   
    }
    
    printf("%d", cant);
    /*system("pause");*/
    return 0;
}

int verificarTablero(int tablero[][8])
{
    int i, j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(tablero[i][j]>8)
                return 0;
        }
    }
    
    return 1;
}

void ponerTorre(int tablero[][8], int torre[])
{
    int i;
    
    for(i=0; i<8; i++)
    {
        tablero[torre[0]][i] += 1;
        tablero[i][torre[1]] += 1;      
    }

    tablero[torre[0]][torre[1]] += 6;

/*  imprimir(tablero);*/
}

void ponerCaballo(int tablero[][8], int x, int y)
{
    int i, nx, ny;

    int vf[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int vc[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    
    for(i=0; i<8; i++)
    {
        nx = x + vf[i];
        ny = y + vc[i];
        
        if(nx>=0 && nx<8 && ny>=0 && ny<8)
            tablero[nx][ny] += 1;
    }
    tablero[x][y] += 8;
    
/*  imprimir(tablero);*/
}
void imprimir(int tablero[][8])
{
    int i, j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
            printf("%d ", tablero[i][j]);
        
        printf("\n");
    }
}
