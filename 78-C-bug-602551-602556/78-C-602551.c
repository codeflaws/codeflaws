#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int a){
    int i;
    for (i = 2; i <= sqrt(a); i++){
        if (!(a % i)){
            return i;
        }
    }
    return -1;
}

int main(int argc, char *argv[])
{
    int n1, m, k, a = 1;
    scanf("%d%d%d", &n1, &m, &k);
    if (n1 % 2 == 0){
        printf("Marsel");
        return 0;
    }
    a = prime(m);
    if ((k <= sqrt(m) && a != -1) || (k > sqrt(m) && m / a >= k) || k == 1){
        printf("Timur");
    } else{
        printf("Marsel");
    }
    return 0;
}
