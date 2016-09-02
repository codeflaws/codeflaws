#include <stdio.h>
#include <stdlib.h>
void intercambiar ( int*, int*);
void quicksort(int[], int, int);
int main(int argc, char *argv[])
{
    int n, i, cont=0, limit, band = 0, penality, hora;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n-1);
    hora = 6*60+10;
    for(i=0; i<n; i++)
    {
        hora+=a[i];
        if(hora <= 12*60)
            cont++;

        else
        {
            limit = hora - 12*60;
            if(limit <= 6*60)
            {
                cont++;
                penality+= limit;
            }
            else
            {
                i = n;
            }
        }
    }
    if(cont == 0)
        penality = 0;
    printf("%d %d",cont, penality);
    return 0;
}
void intercambiar ( int* a, int* b )
{
    int t = *a;
    *a = *b;
    *b = t;
}

void quicksort(int a[], int primero, int ultimo)
{
    int i, j, central, pivote;

    central = (primero + ultimo)/2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do{
        while (a[i] < pivote) i++;
        while (a[j] > pivote) j--;

        if(i<=j)
        {
            intercambiar(&a[i], &a[j]);
            i++;
            j--;
        }
    }while(i <= j);

    if(primero < j)
        quicksort(a, primero, j);
    if(i < ultimo)
        quicksort(a, i, ultimo);
}
