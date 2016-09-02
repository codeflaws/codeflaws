#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double n, x, y , temp;
    scanf("%lf %lf %lf", &n, &x, &y);

    temp =ceil( n * (y/100));
    double ans = temp - x;

    printf("%d", (int)ans);
    return 0;
}
