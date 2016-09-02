#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, steps = 0;
    scanf("%d", &n);
    if(n>4)
    {
        steps = n/5;
        n = n%5;
    }
    if(n>3)
    {
        steps = steps + n/4;
        n = n%4;
    }
    if(n>2)
    {
        steps = steps + n/3;
        n = n%3;
    }
    if(n>1)
    {
        steps = steps + n/2;
        n = n%2;
    }
    steps = steps + n;
    printf("%d\n", steps);
return 0;
}
