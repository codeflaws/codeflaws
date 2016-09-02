#include<stdio.h>
int main(int argc, char *argv[])
{
    double l,p,q,a;
    scanf("%lf%lf%lf",&l,&p,&q);
    a=(p*l)/(p+q);
    printf("%lf",a);
    return 0;
}
