#include<stdio.h>
#define min(a,b) (a<b)?a:b

int main(int argc, char *argv[])
{
    int a,b,k;
    while(scanf("%d %d",&a,&b)==2)
        ((min(a,b))%2==0) ? printf("Malvika\n") : printf("Akshat\n");
    return 0;
}
