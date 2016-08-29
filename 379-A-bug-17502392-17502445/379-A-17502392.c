#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, m, sum = 0;
    scanf("%d %d", &n, &m);
    sum = n;
    while (n != 0){
        n = n/m;
        sum += n;
    }
    printf("%d\n", sum);
    return 0;
}
