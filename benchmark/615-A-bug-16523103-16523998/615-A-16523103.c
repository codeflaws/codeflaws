#include <stdio.h>

int main(int argc, char *argv[]){

    int n, m;
    int x, i, j;
    int valor;
    int yes = 1;

    int bulbs[100];
    for (i = 0; i < 100; i++){
        bulbs[i] = 0;
    }

    scanf("%d", &n);
    scanf("%d", &m);

    if (m == 0){
        printf("YES\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x != 0){
            for (j = 0; j < x; j++) {
                scanf("%d", &valor);
                bulbs[valor-1] = 1;
            }
        }
    }

    for (i = 0; i < n; i++){
        yes = yes * bulbs[i];
    }

    if (yes == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
