#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int k, count=0,b;
    char c[1050];
    scanf("%s", &c);




        k=c[0];
        if (k>=90)
        {
            b=k-32;
            c[0]=b;

        }
        printf("%s",c);
return 0;
    }


