#include <stdio.h>
int main(int argc, char *argv[])
{
    double l, p, q, X;
    scanf("%lf %lf %lf", &l, &p, &q);
    X = (p*l)/(q + p);
    printf("%.1lf", X);
    return 0;
}
