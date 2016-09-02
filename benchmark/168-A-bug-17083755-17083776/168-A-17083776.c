#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,x,y,t;
    scanf("%d %d %d",&n,&x,&y);
    t=ceil(y*n/100.0)-x;
    if(t>0)
    printf("%d",t);
    else
        printf("0");
return 0;
}
