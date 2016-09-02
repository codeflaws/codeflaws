#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(a+b==n){printf("%d",b);}
    else if(a+b<n){printf("%d",b+1);}
    else{printf("%d",n-a);}
    return 0;
}