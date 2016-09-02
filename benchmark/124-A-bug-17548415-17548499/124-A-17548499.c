#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a-b<=c)
    printf("%d",a-b);
    else
    printf("%d",c+1);
return 0;
}