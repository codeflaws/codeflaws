#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c, s;
    scanf("%d%d%d%d", &s, &a, &b, &c);
    if(a == 0 && b == 0 && c == 0){
        printf("0.0 0.0 0.0");
    } else {
        double x = ((double) a / (double)(a + b + c)) * (double) s;
        double y = ((double) b / (double)(a + b + c)) * (double) s;
        double z = ((double) c / (double)(a + b + c)) * (double) s;
        printf("%lf %lf %lf", x, y, z);
    }
    return 0;
}
