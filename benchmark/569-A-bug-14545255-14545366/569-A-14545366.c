#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int t,s,q;
    int num = 1;

    scanf("%i %i %i",&t,&s,&q);

    while(s*q < t)
    {
        num++;
        s = s*q;
    }

    printf("%i",num);
return 0;
}
