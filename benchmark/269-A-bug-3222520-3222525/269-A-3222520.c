#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    long n, i,k,max = 0;
    long a,b;
    scanf ("%ld", &n);
    for (i=0; i<n; i++, k=0){
        scanf("%ld%ld", &a, &b);
        k = a;
        while (b>0){
            b = (b+3)/4;
            k++;
        }
        if (k>max){
            max = k;
        }
    }
    printf("%ld", max);
    return 0;
}
