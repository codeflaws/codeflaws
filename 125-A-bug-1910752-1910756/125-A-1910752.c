#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    printf("%d %d",n/36,(n%36+1)/3);
    return 0;
}
