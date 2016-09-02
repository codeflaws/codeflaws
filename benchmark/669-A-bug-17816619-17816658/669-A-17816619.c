#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define pi 3.1415926


int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);

    int results;
    results = (2*n)/3 + ((n%3)!=0?1:0);
    printf("%d", results);
    return 0;
}
