# include <stdio.h>
int main(int argc, char *argv[])
{
    long long int n,M,i,T=0,j;
    scanf("%lld %lld",&n,&M);
    long long int c[n],t[n],m[M];
    for(i=0;i<n;i++)
    scanf("%lld %lld",&c[i],&t[i]);
    for(i=0;i<M;i++)
    scanf("%lld",&m[i]);

    j=0;i=0;
    while(i<n && j<M)
    {
        T=T+c[i]*t[i];
        while(m[j]<=T && j<M){printf("%lld\n",i+1);j++;}
        i++;
    }
    return 0;}
