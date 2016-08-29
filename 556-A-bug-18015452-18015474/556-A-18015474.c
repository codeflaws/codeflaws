#include <stdio.h>
#define nMAX 200002

int main(int argc, char *argv[]){
    long n, n0 = 0, n1 = 0;
    char a[nMAX];
    scanf("%ld", &n);
    scanf("%s", &a);
    long i;
    for (i = 0; i < n; i++){
        if (a[i] == '0') n0++;
        else n1++;
    }
    printf("%ld",labs(n0-n1));
    return 0;
}
