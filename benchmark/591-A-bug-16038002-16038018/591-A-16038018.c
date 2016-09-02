#include<stdio.h>

int main(int argc, char *argv[])
{
    double l,p,q;
    scanf("%lf",&l);
    scanf("%lf",&p);
    scanf("%lf",&q);
    printf("%lf",l*p/(p+q));
    return 0;
}
