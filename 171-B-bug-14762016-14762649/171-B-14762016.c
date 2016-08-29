#include <stdio.h>
int main(int argc, char *argv[])
{
    int i, n, sum  = 13 ;
    scanf("%d", &n);
    if(n == 1){
        printf("%d", 1);
        return 0;
    }
    if(n == 2){
        printf("%d", 13);
        return 0;
    }
    for(i = 3; i <= n; i++){
        sum = sum + (i+1) * 6;
    }
    printf("%d", sum);
    return 0;
}
