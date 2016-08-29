#include<math.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    b/=a;
    c/=a;
    double r=sqrt(b*b-4*c);
    printf("%.8f\n%.8f\n", (-b+r)/2, (-b-r)/2);
return 0;
}
