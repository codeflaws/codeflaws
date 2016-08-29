#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int i , j , k, l ,m,n,counter=0,ara[1000];
    scanf("%lld %lld" , &n , &k);
    for(i=0; i<n; i++)
    {
        scanf("%lld" , &ara[i]);
    }
     for(i=0; i<n; i++)
    {
       if(ara[i]>=ara[k] && ara[i]!=0)
       {
           counter++;
       }
    }
     printf("%lld\n" , counter);
     return 0;
}
