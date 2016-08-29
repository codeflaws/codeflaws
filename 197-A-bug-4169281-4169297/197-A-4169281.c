#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,r,x;
    scanf("%d %d %d",&a,&b,&r);
    if(a<b)
    x=a;
    else
    x=b;
    if(x>2*r)
    printf("First");
    else
    printf("Second");
    return 0;
}
