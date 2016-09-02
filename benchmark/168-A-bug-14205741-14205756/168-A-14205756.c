#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double n, x, y , temp;
    scanf("%lf %lf %lf", &n, &x, &y);

    temp =ceil( n * (y/100));
    double ans = temp - x;

    if(ans < 0) printf("0");
    else printf("%d", (int)ans);
    return 0;
}
