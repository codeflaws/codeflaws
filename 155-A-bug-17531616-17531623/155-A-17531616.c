#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, sum = 0, x, min = -1, max = -1;
    scanf("%d", &n);
    while (n--){
        scanf("%d", &x);
        if (min = -1){
            max = x;
            min = x;
        }else{
            if (max < x){
                sum++; max = x;
            }
            if (min > x){
                sum++; min = x;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
