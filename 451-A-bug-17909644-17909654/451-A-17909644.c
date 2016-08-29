#include<stdio.h>

int m,n,meem;

int main(int argc, char *argv[])
{
    scanf("%d %d",&m,&n);
    if(m>=n){meem=m;}
    else {meem=n;}
    if(meem%2==0){printf("Malvika");}
    else {printf("Akshat");}




    return 0;
}
