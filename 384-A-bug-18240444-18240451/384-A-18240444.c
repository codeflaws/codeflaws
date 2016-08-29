#include <stdio.h>

int main(int argc, char *argv[]){
    int n, i, j;
    scanf("%d", &n);
    if (n % 2 == 0) printf("%d\n", (n/2) * n);
    else printf("%d\n", (n/2)*((n/2)) + ((n/2)+1)*((n/2)+1));
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)
            if (((i % 2 == 0) && (j % 2 == 0)) || ((i % 2 != 0) && (j % 2 != 0)))
                printf("c");
            else printf(".");
        printf("\n");
    }
    return 0;
}
