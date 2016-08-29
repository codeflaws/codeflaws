#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, x, sum = 0;
    for (i = 0; i < 5; i++){
        scanf("%d", &x);
        sum += x;
    }
    printf("%d\n", (sum % 5 == 0)? sum/5 : -1);
    return 0;
}
