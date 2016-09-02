#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
    long  int n, t, c;
    scanf("%ld%ld%ld", &n, &t, &c);
    long  int * a = (long int *) malloc(sizeof(long int)*n);
    long  int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
    }
    
    long int result = 0;
    long int j = 0;
    for (i = 0; i < n; i++)
    {
        
        if (a[i]>t){ j = 0;  continue; }
        else{
            
                if (j < c)
                {
                    j++;
                }

                 if (j == c )
                {
                    result++;
                    j++;
                }
                else if (j > c)
                {
                    result++;
                    j++;
                }
        }
    }

    free(a);
    printf("%ld\n", result);
    system("pause");
    return 0;
}