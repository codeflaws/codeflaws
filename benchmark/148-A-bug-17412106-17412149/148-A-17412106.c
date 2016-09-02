#include<stdio.h>
int main(int argc, char *argv[])
{
    long long k,l,m,n,d,cnt=0,i;
    int flg;
    scanf("%lld %lld %lld %lld %lld",&k,&l,&m,&n,&d);
    for(i=0;i<d;i++)
    {
        flg=0;
        if(i%k==0&&flg==0)
        {
            flg=1;
            cnt++;
        }
        if(i%l==0&&flg==0)
        {
            flg=1;
            cnt++;
        }
        if(i%m==0&&flg==0)
        {
            flg=1;
            cnt++;
        }
        if(i%n==0&&flg==0)
        {
            flg=1;
            cnt++;
        }
    }
    printf("%lld",cnt);
return 0;
}
