#include<stdio.h>
#include<string.h>
#define S 30
#define N 100

int main(int argc, char *argv[]){
    typedef struct {
            int tope;
            char tipo[S];
            char sup[S];
            }CARACTERISTICAS;

    CARACTERISTICAS rango[4] = {
                    3,"bytes","127" ,
                    5,"short","32767" ,
                    10,"int","2147483647" ,
                    19,"long","9223372036854775807"
                    };
    char valor[N];
    int tamanio;
    int i;
    scanf("%s",valor);
    tamanio=strlen(valor);
    while (valor[0]=='0' || tamanio>100) {
        scanf("%s",valor);
    }

    for (i=0; i<4; i++){
        if( tamanio<rango[i].tope || (tamanio==rango[i].tope && strcmp(valor,rango[i].sup)<=0) ) {
            printf("%s",rango[i].tipo);
            break;
        }
        if (i==3){
            printf("BigInteger");
        }
    }

    return 0;
}