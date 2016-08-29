#include<stdio.h>
int main(int argc, char *argv[]){
    long long int n,i,c=0,mod;
    scanf("%lld",&n);
    if(n%2!=0){
        printf("0");
    }
    else
    {
        if(n%4==0){
            printf("%lld",n/4-1);
        }
        else
            printf("%lld",n/4-1);
    }
return 0;
}
