#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int a,b,c,n;
    scanf("%d %d %d",&a,&b,&c);
    n=(a+b+c)*2-6+(c-1)*(b-1);
    printf("%d",n);
    return 0;
}