#include <stdio.h>

float max(float a, float b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main(int argc, char *argv[])
{
    float a, b, c, d, m, v;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    m=max(3*a/10, a-(a/250)*c);
    v=max(3*b/10, b-(b/250)*d);
    printf("m=%f v=%f\n", m, v);
    if(m>v)
        printf("Misha\n");
    else if(m<v)
        printf("Vasya\n");
    else if(m==v)
        printf("Tie\n");
    return 0;
}