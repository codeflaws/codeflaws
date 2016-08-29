#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    
    int n, m, i;
    
    char aux[20];
    
    double h1, h2, L;
    int w1, w2;
    
    scanf("%d", &n);
    
    double stairs[n];
    
    for(i=0; i<n; i++)
    {
        scanf("%s", aux);
        
        stairs[i] = atof(aux);
    }

    
    scanf("%d", &m);
    
    double boxes[m];
    
    L=0;    /*respuesta anterior*/
    h1=0;   /*altura anterior*/
    w1=0;   /*ancho anterior*/
    
    for(i=0; i<m; i++)
    {
        
        scanf("%d%s", &w2, &aux);
        h2=atof(aux);
        
        L= (L+h1)>stairs[w2-1]? L+h1: stairs[w2-1];
        
        h1=h2;
        w1=w2;
        
        boxes[i]=L;
        
    }
    
    for(i=0; i<m; i++)
    {
        printf("\n%.0f", boxes[i]);
        
    }
    
/*  printf("\n");
    system("pause");*/
    
    return 0;
}
