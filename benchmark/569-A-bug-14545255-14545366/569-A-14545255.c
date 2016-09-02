#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int t,s,q;
    int num = 1;

    scanf("%i %i %i",&t,&s,&q);

    while((t-s*q) > 0)
    {
        num++;
        t -= s*q;
        s = s*q;
    }

    printf("%i",num);
return 0;
}
