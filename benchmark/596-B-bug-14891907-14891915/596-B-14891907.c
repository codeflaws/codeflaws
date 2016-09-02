#include<stdio.h>
int main(int argc, char *argv[])
{
    long long n;
    scanf("%d",&n);
    long long ara[n];
    long long ara1[n];
    long long sum ;
    for(long long i = 0; i < n; i++){
        scanf("%lld",&ara[i]);
        ara1[i] = 0;
    }
    if(ara[0] > ara1[0])sum = ara[0] - ara1[0];
    else sum = ara1[0] - ara[0];
    for(int i = 0; i < n-1 ;i++){
        if(ara[i] > ara[i+1])sum = sum + ara[i] - ara[i+1];
        else sum = sum + ara[i+1] - ara[i];
    }
    printf("%lld\n",sum);
    return 0;
}
