#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float x;
    unsigned int n, V, i;
    unsigned int A = 0;
    unsigned int *a;

    scanf("%u %u\n", &n, &V);
    a = (unsigned int *)malloc(n*sizeof(unsigned int));
    for (i = 0; i < n; i++) {
        scanf("%u", a+i);
        A += *(a+i);
    }
    
    x = V / A;
    for (i = 0; i < n; i++) {
        unsigned int b;
        float x1;
        scanf("%u", &b);
        x1 = (float)b / (float)a[i];
        if (x1 < x)
            x = x1;
    }

    printf("%f", A*x);
    return 0;
}

