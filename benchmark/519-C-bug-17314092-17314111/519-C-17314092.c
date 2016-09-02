#include <stdio.h>

int main(int argc, char *argv[]){
    int i, n, m, x, count = 0;
    scanf("%d %d", &n, &m);
    while(m > 0 && n > 0){
        if(m > n){
            m = m - 2;
            n--;
            count++;
        }
        else{
            n = n - 2;
            m--;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
