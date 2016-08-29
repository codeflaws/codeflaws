#include <stdio.h>
int main(int argc, char *argv[])
{
    int s,n,x;
    scanf("%d",&x);
    for (s=1,n=1;s<x;s=(n*n+1)/2) n+=2;
    if (x==3) printf("5");
    else
    printf("%d",n);
    return 0;
}