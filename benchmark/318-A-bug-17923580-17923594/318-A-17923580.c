#include<stdio.h>
int main(int argc, char *argv[])
{
    long long i,j,k,l,n,m;
    scanf("%lld%lld",&k,&l);
    i=k%2;
    j=k/2;
    m=j;
    if(i)
    m++;
   // printf("%d",m);
    if(m>l)
    printf("%lld",2*l-1);
    else
    {
        l=l-m;
        printf("%lld",2*l);
    }
return 0;
}
