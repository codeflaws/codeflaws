#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int numTel;
    char** listaTelefones;
    int i,j,resultado=0,contador;
    char compara;
    
    scanf("%d",&numTel);
    
    listaTelefones = (char**) malloc(numTel*sizeof(char*));
        
    for (i=0;i<numTel;i++){
        listaTelefones[i] = (char*) malloc(20*sizeof(char));
    }
    
    for (i=0;i<numTel;i++){
        scanf("%s",listaTelefones[i]);
    }
    
    for (i=0;i<strlen(listaTelefones[0]);i++){
        compara = listaTelefones[0][i];
        contador = 0;
        for (j=0;j<numTel;j++){
            if (compara==listaTelefones[j][i]){
               contador++;
            }
        }
        if (contador == numTel)
           resultado++;
        else
            break;
    }
    printf ("%d\n",resultado);
    return resultado;
}
            
