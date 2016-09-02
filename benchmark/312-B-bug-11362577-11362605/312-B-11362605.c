#include <stdio.h>

int main(int argc, char *argv[])
{
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    printf("%lf\n", a/b/(1-(1-a/b)*(1-c/d)));
    return 0;
}
