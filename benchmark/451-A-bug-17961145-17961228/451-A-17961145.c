#include<stdio.h>

int main(int argc, char *argv[])
{
    int a,b,k;
    while(scanf("%d %d",&a,&b)==2)
        ((a*b)%2==0) ? printf("Malvika\n") : printf("Akshat\n");
    return 0;
}
