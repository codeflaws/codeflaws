#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,x,y,t;
    scanf("%d %d %d",&n,&x,&y);
    t=ceil(y*n/100.0)-x;
    printf("%d",t);
return 0;
}
