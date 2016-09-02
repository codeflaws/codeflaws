//257B.c
#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int a=1000000007;
    long long int x,y,n;
    scanf("%lld %lld",&x,&y);
    scanf("%lld",&n);

    n=n%6;
     
    
    if(n==1)
        printf("%lld",(x%a+a)%a);
    else if(n==2)
        printf("%lld",((y%a)+a)%a);   
    else if(n==3)
        printf("%lld",((y-x)%a+a)%a);
    else if(n==4)
        printf("%lld",((-x)%a+a)%a);
    else if(n==5)
        printf("%lld",((-y)%a+a)%a);
    else if(n==6)
        printf("%lld",((x-y)%a+a)%a);
    

    return 0;       
}