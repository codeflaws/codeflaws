#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a, b, c, discr;

    scanf("%lf %lf %lf", &a, &b, &c);
    discr = b*b - 4*a*c;
    double x1, x2;
    x1 = ((-1.0)*b - sqrt(discr))/(2.0*a);
    x2 = ((-1.0)*b + sqrt(discr))/(2.0*a);

    if (a!=0 && (b!=0 || b==0) && c!=0) {
        if (discr > 0)
            //(x1 > x2 ? printf("2\n%.10lf\n%.10lf", x2, x1) : printf("2\n%.10lf\n%.10lf", x1, x2));
            (x1 > x2) ? printf("2\n%.10lf\n%.10lf", x2, x1) : printf("2\n%.10lf\n%.10lf", x1, x2);
        else if (discr == 0)
            printf("1\n%.10lf", x2);
        else
            printf("0\n");
    } else if (a==0 && b!=0 && c!=0) {
        printf("1\n%.10lf", (-1.0)*c/b);
    } else if ((a==0 && b!=0 && c==0) || (a!=0 && b==0 && c==0)) {
        printf("1\n0.00000\n");
    } else if (a==0 && b==0 && c==0) {
        printf("-1\n");
    } else if (a==0 && b==0 && c!=0)
        printf("0\n");

    return 0;
}
