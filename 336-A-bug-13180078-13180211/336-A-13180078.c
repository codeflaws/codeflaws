#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int x,y,a,b,p,q,x1,y1,x2,y2;
    scanf("%lld %lld",&x,&y);
    if(x>0&&y>0) {x1=0; y1=x+y; x2=x+y; y2=0;}
    if(x>0&&y<0) {x1=0; y1=y-x; x2=x-y; y2=0;}
    if(x<0&&y>0) {x1=x-y; y1=0; x2=0; y2=y-x;}
    if(x<0&&y<0) {x1=x+y; y1=0; x2=0; y=x+y;}
    printf("%lld %lld %lld %lld",x1,y1,x2,y2);
    return 0;
}
