#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, i, j, k, count=0, b=0, p;
    scanf("%d", &a);
    char c[1000];
    char e;

        scanf("%s",  &c);
    for (i=0; c[i]!= '\0'; i++)
    {
        k=0;
        b=0;
        k=c[i];
        if (k>=65 && k<=90)
        {
            b=k+32;
            c[i]=b;

        }

    }

    i=0;
        for (i=0; c[i]!= '\0'; i++)
    {

        if (c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u')
        {

            continue;

        }
        else
        {
            printf(".%c",c[i]);
        }

    }

    return 0;
}
