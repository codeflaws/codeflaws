#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a,c;
    scanf("%d %d",&n,&a);
    if(n==1)
        printf("1\n");
    if(a>n/2)
        printf("%d\n",a-1);
    else
        printf("%d\n",a+1);

    return 0;
}
