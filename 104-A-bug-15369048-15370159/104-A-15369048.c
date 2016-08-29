#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,x;
    scanf("%d",&n);
    x=n-10;
    
    if(x>0 && x<10)
        printf("4");
    
    if(x==10)
        printf("15");
    
    if(x==0)
        printf("0");
    
    if(x==11)
        printf("4");
    if(x>11)
        printf("0");
    return 0;
}