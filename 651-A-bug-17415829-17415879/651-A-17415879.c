#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a,b, sum = 0, i,j;
    scanf("%d %d", &a, &b);
    if (a > b) {i = -2; j = 1;}
    else {i = 1; j = -2;}
    while ((a > 0) && (b > 0) && ((a != 1) || (b != 1))){
        a += i; b += j;
        if ((a == 1) && (b == 2)) {i = 1; j = -2;}
        else if ((b == 1) && (a == 2)){i = -2; j = 1;}
        else if (a <= 2) {i = 1; j = -2;}
        else if (b <= 2) {i = -2; j = 1;}
        sum++;
    }
    printf("%d\n", sum);
    return 0;
}
