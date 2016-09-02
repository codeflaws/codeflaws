#include<stdio.h>
int main(int argc, char *argv[])
{
    int n;
    while(scanf("%d",&n))
    printf("%d\n",n%2?1:2);
    return 0;
}
