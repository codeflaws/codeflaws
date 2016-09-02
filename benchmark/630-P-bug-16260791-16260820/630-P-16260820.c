#include "stdio.h"
#include "math.h"


const double pi = 3.14159265359;

double _sin(double a)
{
    return sin((pi / 180) * a);
}

int main(int argc, char *argv[])
{
    long long int n = 0;
    long long int r = 0;
    scanf ("%lld", &n);  
    scanf ("%lld", &r);  

    double a;
    double alpha, beta, gamma, delta;
    double st, sa, s;

    alpha = 360.0 / n; 
    beta = (180 - alpha) / 2;
    gamma = alpha * ((n + 1) / 2 - 1);
    delta = (180 - gamma) / 2;

    a = _sin(alpha) / _sin(beta) * r;

    st = a * a / 4 * _sin(beta - delta) / _sin(90 - (beta - delta));
    sa = pi * r * r / n - r * r * _sin(alpha) / 2;
    s = pi * r * r - n * (st + sa);

    printf("%.16f\n", s);
    
    return 0;
}
