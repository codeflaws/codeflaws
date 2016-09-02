#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    printf("%d %d",(n+1)/36,(n+1)%36/3);
    return 0;
}
