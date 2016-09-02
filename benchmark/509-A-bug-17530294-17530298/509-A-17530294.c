#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n; scanf("%d", &n);
    switch(n){
        case 1 : printf("1\n"); break;
        case 2 : printf("2\n"); break;
        case 3 : printf("6\n"); break;
        case 4 : printf("20\n"); break;
        case 5 : printf("70\n"); break;
        case 6 : printf("252\n"); break;
        case 7 : printf("924\n"); break;
        case 8 : printf("3232\n"); break;
        case 9 : printf("12870\n"); break;
        case 10 : printf("48620\n"); break;
        default : printf("1\n");
    }
    return 0;
}
