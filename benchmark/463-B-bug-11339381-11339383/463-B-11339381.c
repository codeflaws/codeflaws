#include<stdio.h>
int ara[500000];
int main(int argc, char *argv[])
{
    int i, j, k, n, temp, max = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }
    max = ara[0];
    for(i = 0, temp = 0; i < n - 1; i++){
        if(temp < ara[i]){
            temp = ara[i];
        }
    }


    printf("%d", temp);

    return 0;
}
