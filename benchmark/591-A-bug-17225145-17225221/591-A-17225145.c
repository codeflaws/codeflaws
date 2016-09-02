#include<stdio.h>
int main(int argc, char *argv[])
{
    double l, p, q, s;
    scanf("%lf", &l);
    scanf("%lf", &p);
    scanf("%lf", &q);
    s = p*(l/(p+q));
    printf("%0.1lf\n", s);
    return 0;
}
