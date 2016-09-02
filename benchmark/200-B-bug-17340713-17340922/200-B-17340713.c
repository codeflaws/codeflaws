#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]){
    int x;
    scanf ("%d", &x);
    int i=0;
    double y,n;
    y=0; n=0;
    for (i=0; i<x; i++){
        scanf ("%lf", &y);
        n+=y;
        puts("x");

    }
    n/=x;
    printf("%lf", n);
    return 0;
}
