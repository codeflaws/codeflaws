#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i;
    scanf("%i", &n);
    int fin = 1;
    for (i = 1; i < n; i++)
        fin = ((fin*3) % 1000003);
    printf("%i\n", fin);

}