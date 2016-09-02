#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,x,y,z,perimeter;
    scanf("%d %d %d",&a,&b,&c);
    x=sqrt(a*b/c);
    y=sqrt(b*c/a);
    z=sqrt(c*a/b);
    perimeter=4*(a+b+c);
    printf("%d",perimeter);
    return 0;
}
