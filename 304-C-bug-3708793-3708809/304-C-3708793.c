#include<stdio.h>

int main(int argc, char *argv[]){
    int n, i;
    scanf("%d", &n);
    if (n % 2){
        for (i = 0 ; i < n ; ++i)
            printf("%d%c", i, i == n - 1 ? '\n' : ' ');
        for (i = 0 ; i < n ; ++i)
            printf("%d%c", i, i == n - 1 ? '\n' : ' ');
        for (i = 0 ; i < n ; ++i)
            printf("%d%c", (i + i) % n, i == n - 1 ? '\n' : ' ');
    }
    else puts("-1");

}
