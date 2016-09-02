#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, s, a, b, max = -1;
    scanf("%d %d", &n, &s);
    while(n--){
        scanf("%d %d", &a, &b);
        if ((s > a) && ((100-b) > max) && (b != 0)) max = 100-b;
        else if ((s >= a) && ((100-b) > max) && (b == 0) && (max == -1)) max = 0;
    }
    printf("%d\n", max);
    return 0;
}
