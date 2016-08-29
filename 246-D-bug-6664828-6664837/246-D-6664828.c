#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
    int color;
    struct Nodo *ptrSiguiente;
}NodoLista;
typedef NodoLista *PtrNodoLista;

typedef struct Vertice{
    int cantidad;
    int valido;
    PtrNodoLista ptrL;
}Vertices;

void insertar(PtrNodoLista *PtrS,int color,Vertices *);

int main(int argc, char *argv[]){
    int i,a,b,n,m,k=100000,mayor=0,h=0,cont=0;
    Vertices *vertice;

    scanf("%d %d",&n,&m);
    int color[n];

    for(i=0;i<n;i++){
        scanf("%d",&color[i]);
        if(color[0]==color[i]){
            cont++;
        }
        if(h<color[i]){
            h=color[i];
        }
    }
    vertice=calloc(h,sizeof(Vertices));
    if(cont!=n){
        for(i=0;i<n;i++){
            vertice[color[i]-1].valido=1;
        }
    }
    for(i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        if(cont!=n){
            if(color[a-1]!=color[b-1]){
                insertar(&vertice[color[a-1]-1].ptrL,color[b-1],&vertice[color[a-1]-1]);
                insertar(&vertice[color[b-1]-1].ptrL,color[a-1],&vertice[color[b-1]-1]);
            }
        }
    }
    if(cont!=n){
        for(i=0;i<h;i++){
            if(vertice[i].cantidad>mayor && vertice[i].valido==1){
                k=i+1;
                mayor=vertice[i].cantidad;
            }else if(vertice[i].cantidad==mayor  && vertice[i].valido==1){
                if((i+1)<=k){
                    k=i+1;
                }
            }
        }
    }else{
        k=color[0];
    }
    printf("%d",k);

    system("PAUSE>NULL");
    return 0;
}

void insertar(PtrNodoLista *PtrS,int valor,Vertices *ver){
    PtrNodoLista ptrNuevo,ptrAnterior,ptrActual;

    ptrNuevo=(PtrNodoLista)malloc(sizeof(NodoLista));
    ptrNuevo->color=valor;
    ptrNuevo->ptrSiguiente=NULL;

    ptrActual=*PtrS;
    ptrAnterior=NULL;

    while(ptrActual!=NULL && ptrActual->color<valor){
        ptrAnterior=ptrActual;
        ptrActual=ptrActual->ptrSiguiente;
    }

    if(ptrAnterior!=NULL){
        if(ptrActual!=NULL){
            if(ptrActual->color!=valor){
                ptrAnterior->ptrSiguiente=ptrNuevo;
                ptrNuevo->ptrSiguiente=ptrActual;
                ver->cantidad++;
            }else{
                free(ptrNuevo);
            }
        }else{
            ptrAnterior->ptrSiguiente=ptrNuevo;
            ver->cantidad++;
        }
    }else{
        if(ptrActual!=NULL){
            if(ptrActual->color!=valor){
                ptrNuevo->ptrSiguiente=ptrActual;
                *PtrS=ptrNuevo;
                ver->cantidad++;
            }else{
                free(ptrNuevo);
            }
        }else{
            *PtrS=ptrNuevo;
            ver->cantidad++;
        }
    }
}