#include<stdio.h>
int main(int argc, char *argv[])
{
    int s,n;
    scanf("%d",&n);
    s=n-10;
    if(s==10)
    printf("15\n");
    else if(n<20&&s>=1)
    printf("4\n");
    else
    printf("0\n");
    return 0;
}
