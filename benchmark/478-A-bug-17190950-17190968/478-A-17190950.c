#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,d,e,r;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    r=(a+b+c+d+e);
    if(r%5==0)
        printf("%d",r/5);
    else
        printf("-1");
    return 0;
}
