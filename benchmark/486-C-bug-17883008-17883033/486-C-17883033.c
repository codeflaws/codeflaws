#include<stdio.h>
#include<stdlib.h>
int valorAbsoluto( int a);
int minimo( int a,  int b);
int esPalindromo(  int a[],  int n);
int suma(  int v[],  int n);
void crear(int **v,  int n);

int main(int argc, char *argv[]){

    int n, mitad, i,j=0, cursor, limite1, limite2, total =0;
    //t *cambios

    scanf("%d%d",&n, &cursor);

    cursor--;//ontener la posicion i-esima del cursor

    char cadena[n+1];

    scanf("%s",cadena);

    if (n%2 == 0)
        mitad = n/2;
    else
        mitad = n/2+1;
       int cambios[mitad];

   //rear( &cambios, mitad);

    for( i = 0 ; i<mitad ; i++){
        j= valorAbsoluto(cadena[i]-cadena[n-1-i]);
        j = minimo(j, 26-j);
        cambios[i] = j;
        total += cambios[i];
    }

   // printf("\nadafdfbahdfbjah");
    if(!esPalindromo(cambios, mitad)){
        if(cursor  >= mitad)
            cursor = (n-1) - cursor;

        for( i=0 ; i<mitad ; i++){//usca el primer cambio a realizar
            if( cambios[i] != 0){
                limite1=i;
                break;
            }
        }
        for( i=mitad-1 ; i>=0 ; i--){//busca el ultimo cambio cambio a realizar
            if( cambios[i] != 0){
                limite2=i;
                break;
            }
        }
        total += minimo( valorAbsoluto(cursor -limite1 ), valorAbsoluto(cursor - limite2));

        total += valorAbsoluto(limite1-limite2);
        printf("%d\n", total);

    }else
        puts("0");


return 0;
}
int valorAbsoluto(int a){
    if( a < 0)
        a *= -1;

    return a;
}
int minimo( int a, int b){
    if ( a > b)
        return b;
    else if (a ==b)
        return b;
        return a;
}
int esPalindromo( int a[], int n){
    int band=1;
    int i;
    for( i = 0; i < n ; i++){
        if(a[i] > 0){
            band =0 ;
            break;
        }
    }
    return band;
}
 int suma(int v[], int n){
    int suma=0,i;

    for(i = 0; i < n ; i++){
        suma += v[i];
    }
    return suma;
}
void crear( int **v, int n){
    *v = malloc( sizeof(int)*n);

}
