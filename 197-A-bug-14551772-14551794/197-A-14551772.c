#include <stdio.h>
int main(int argc, char *argv[]){
    int a, b, r, d;
    scanf("%d %d %d", &a, &b, &r);
    d = 2 * r;
    if(a >= d && b >= d)
        printf("First\n");
    else
        printf("second\n");
    return 0;
}
