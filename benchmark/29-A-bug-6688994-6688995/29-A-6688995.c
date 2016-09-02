#include <stdio.h>
#include <stdlib.h>
typedef struct camel {
    int pos;
    int dis;
}camellos;
void ordena (camellos *camel, int tamanto);
void leerCamellos (camellos *a, int tamanto);
void verificaCamellos(camellos *cam, int tamanto);
int main(int argc, char *argv[]){
    camellos spit[100];
    int tamanto, i;
    scanf("%d",&tamanto);
    leerCamellos( spit, tamanto);
    verificaCamellos(spit , tamanto);
    return 0;
}

void leerCamellos(camellos *a, int tamanto){
    int i;
    for (i=0 ; i<tamanto ; i++){
        scanf("%d", &a[i].pos);
        scanf("%d", &a[i].dis);
    }
}
void verificaCamellos(camellos *cam, int tamanto){
    int i,j,x;
    int yes=0;
    ordena(cam, tamanto);
    for (i=0; i<tamanto; i++){
        x=cam[i].dis+cam[i].pos;
        for (j=i; j < tamanto; j++){
            if (x==cam[j].pos){
                if((cam[i].dis + cam[j].dis)==0){
                    yes=1;
                }
            }
        }
    }
    if(yes==1)
        printf("\nYES");
    else
        printf("\nNO");
}

void ordena (camellos *camel, int tamanto){
    camellos aux;
    int i,j;
    for (i=0; i<tamanto; i++){
        for (j=0 ; j<tamanto -1; j++){
            if (camel[j].pos>camel[j+1].pos){
                aux=*(camel+j);
                *(camel+j)=*(camel +j+1);
                *(camel+j+1)=aux;
            }
        }
    }
}
