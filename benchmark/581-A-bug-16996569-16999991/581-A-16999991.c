#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,x,y;
    scanf("%d %d",&a,&b);
    if(a>b){
        x=b;
        y=(a-b)/2;;
    }
    else {
        x=a;
        y=(b-a)/2;
    }
    printf("%d %d",x,y);
return 0;
}