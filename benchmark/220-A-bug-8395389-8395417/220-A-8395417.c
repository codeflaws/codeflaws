/*P11 - LITTLE ELEPHANT AND PROBLEM*/

#include<stdio.h>

void ordenamientoShell(unsigned long a[], int n1);

int main(int argc, char *argv[]){

    int nro;
    int contador=0;
    int x;
    scanf("%d",&nro);
    unsigned long vec1[nro],vec2[nro];

    for(x = 0; x < nro; x++){

        scanf("%d",&vec1[x]);
        vec2[x] = vec1[x];
    }

        ordenamientoShell(vec2, nro-1);


        for( x = 0; x < nro; x++){

            if(vec1[x] != vec2[x])
                contador++;
        }

        if(contador <= 2)
            printf("YES");

        else
            printf("NO");

    return 0;
}



void ordenamientoShell(unsigned long a[], int n1){

        int p;
        int q;
        int k;
        int intrval;
        unsigned long aux;

        intrval = n1 / 2;

        while (intrval > 0){

            for (p = intrval; p <= n1; p++){
                    q = p - intrval;

                while (q >= 0){
                    k = q + intrval;

                    if (a[q] <= a[k]){
                            q = -1;
                    }
                    else{
                        aux = a[q];
                        a[q] = a[k];
                        a[k] = aux;
                        q -= intrval;
                            }
                }
            }

            intrval = intrval / 2;
        }
    }
