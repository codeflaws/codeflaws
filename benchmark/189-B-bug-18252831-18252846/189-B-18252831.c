#include <stdio.h>
int main(int argc, char *argv[])
{
    long long int w, h;
    scanf("%lld %lld", &w, &h);
    printf("%lld", ((w*w)/4 * (h*h)/4));
    return 0;
}