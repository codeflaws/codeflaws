#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b;
    scanf("%d %d",&a,&b);
    int same = a < b ? a  : b;
    a -=same;
    b -=same;
    int diff = a/2 + b/2;
    printf("%d\n",same+diff);
    return 0;
}
