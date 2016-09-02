#include<stdio.h>
int main(int argc, char *argv[])
{
    int n;long long int s;
    scanf("%d",&n);
    s=6*n*(n-1)-1;
    printf("%I64d",s);
    return 0;
}
