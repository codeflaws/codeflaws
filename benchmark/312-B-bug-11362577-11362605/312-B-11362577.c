#include <stdio.h>

int main(int argc, char *argv[])
{
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    printf("%lf\n", a/b/(a-(a/b*c/d)));
    return 0;
}
