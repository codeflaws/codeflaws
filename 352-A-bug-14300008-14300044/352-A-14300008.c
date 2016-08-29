#include <stdio.h>
int main(int argc, char *argv[])
{
    int i, n,a, five = 0, zero = 0, num;
    scanf("%d", &n);
    for(i = 0; i <n; i++){
        scanf("%d", &a);
        if(a == 0){
            zero++;
        }
        else{
            five++;
        }
    }
    if(five<9 && zero != 0){
        printf("0");
    }
    else if(five>= 9){
        num = (five/9)*9;
        for(i = 0; i <num; i++){
            printf("5");
        }
        for(i = 0; i <zero; i++){
            printf("0");
        }
    }
    else{
        printf("-1");
    }
    return 0;
}
