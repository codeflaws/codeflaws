#include<stdio.h>
#include<stdlib.h>

typedef struct IndM{
            long long int I;
            struct IndM *Sgte;
} INDM;

int minimo(INDM *, int * , int );

int main(int argc, char *argv[]){
    int i,cant;
    INDM *aux;
    INDM *indices;

    scanf("%d",&cant);
    int edad[cant],desc[cant];

    for(i=0;i<cant;i++){
        scanf("%d",&edad[i]);
    }

    indices=(INDM *)malloc(sizeof(INDM));
    indices->I=cant-1;
    indices->Sgte=NULL;

    for(i=cant-1;i>=0;i--){
        if(edad[i]>edad[indices->I]){
            desc[i]=minimo(indices,edad,i);
        }
        else{
            if(edad[i]<edad[indices->I]){
                aux=(INDM *)malloc(sizeof(INDM));
                aux->I=i;
                aux->Sgte=indices;
                indices=aux;
            }
                desc[i]=-1;
        }
    }
    for(i=0;i<cant;i++){
        printf("%d ",desc[i]);
    }
    return 0;
}
int minimo(INDM *Aux, int E[],int N){
    int I;
    for(;Aux!=NULL && E[N]>E[Aux->I]; Aux=Aux->Sgte)
            I=Aux->I-N-1;
    return I;
}
