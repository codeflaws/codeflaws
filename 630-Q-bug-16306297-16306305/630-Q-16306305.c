#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    
    int l,m,n;
   
    scanf("%d %d %d", &l, &m, &n);
    
    printf("%.12f", (double)(((sqrt(2))/12*l*l*l)+(sqrt(2)/6*m*m*m)+((5+sqrt(5))/24*n*n*n)));
    
    return 0;
}

