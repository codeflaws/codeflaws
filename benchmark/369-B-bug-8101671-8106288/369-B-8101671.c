#include <stdio.h>
int arreglo[1000];
int inicio,fin,max,min,sumaparcial,sumaall;
int n,k,j;
void completar(int inicio_arreglo,int fin_arreglo,int arreglo[],int sumak){
    int suma=0,i;
    for (i=inicio_arreglo;i<=fin_arreglo;i++){
        suma=suma+arreglo[i];
    }
    if(suma>sumak){
        for(i=fin_arreglo;i>=inicio_arreglo;i--){
            arreglo[i]--;
            if(fin_arreglo-i+1==suma-sumak){
                break;
            }
        }
        completar(inicio_arreglo,fin_arreglo,arreglo,sumak);
    }
}
int main(int argc, char *argv[]) {
    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%d",&min);
    scanf("%d",&max);
    scanf("%d",&sumaall);
    scanf("%d",&sumaparcial);
    for(j=0;j<=k-1;j++){
        arreglo[j]=max;
    }
    completar(1,k-1,arreglo,sumaparcial-max);
    for(j=k;j<=n-1;j++){
        arreglo[j]=arreglo[k-1];
    }
    completar(k,n-1,arreglo,sumaall-sumaparcial);
    for(j=0;j<=n-1;j++){
        printf("%d ",arreglo[j]);
    }
    return 0;
}