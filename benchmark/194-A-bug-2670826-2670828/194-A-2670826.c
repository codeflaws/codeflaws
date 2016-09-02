#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, k;
    int resultado, aux;
   
    scanf("%d %d", &n, &k);
   
    aux = k - (2 * n);
    if(aux < n)
         resultado = n - aux;
    else
        resultado = 0;
       
    printf("%d", resultado);
   
    system("pause");
    return 0;  
}