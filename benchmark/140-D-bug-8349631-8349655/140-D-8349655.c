#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenar(int v[], int n);
void swap(int *a, int *b);

int main(int argc, char *argv[])
{

    int n, i, nyear=350, maxtime=360, penalty=0;
    
    scanf("%d", &n);
    
    int problems[n];
    
    for(i=0; i<n; i++)
        scanf("%d", &problems[i]);
    
    ordenar(problems, n);
    
    i=0;
    while(nyear-problems[i]>0 && i<n)
    {
        nyear-=problems[i];
        i++;
    }
    
    maxtime += nyear;
        
    while(maxtime-problems[i]>=0 && i<n)
    {
        maxtime-=problems[i];
        penalty += 360-maxtime;
        i++;
    }
    
    printf("%d %d", i, penalty);
/*  printf("\n");
    system("pause");*/
    
    return 0;
}

void ordenar(int v[], int n)
{
    int i, j;
    
    for(i=0; i<n-2; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(v[j]>v[j+1])
            {
                swap(&v[j], &v[j+1]);
            }
            
        }
    }
}

void swap(int *a, int *b)
{
    int aux;
    aux = *a;
    *a=*b;
    *b=aux;
    
}
