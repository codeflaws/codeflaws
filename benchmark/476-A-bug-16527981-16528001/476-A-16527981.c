#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, m;
    scanf ("%d %d", &n, &m);
    if (n > m)
        printf ("-1");
    else
        printf ("%d", ((n+2*m-1)/2/m*m));
    return 0;
}