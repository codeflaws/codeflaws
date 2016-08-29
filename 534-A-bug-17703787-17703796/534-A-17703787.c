#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i;
    scanf("%d", &n);
    switch (n){
        case 1 : printf("1\n1\n"); break;
        case 2 : printf("1\n1\n"); break;
        case 3 : printf("2\n1 3\n"); break;
        case 4 : printf("4\n1 4 2 3\n"); break;
        default :
            printf("%d\n", n);
            for (i = 1; i <= n; i+=2) printf("%d ", i);
            for (i = 2; i <= n; i+=2) {
                printf("%d", i);
                if ((i != n) && (i != n-1)) printf(" ");
            }
            break;
    }
    printf("\n");
    return 0;
}
