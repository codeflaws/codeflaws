#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
    float n, x, y, r = 0;

    scanf("%f %f %f", &n, &x, &y);

    r = (int)ceil(n * (y / 100) - x);

    if(r < 0) r = 0;

    printf("%d\n", r);

    return 0;
}
