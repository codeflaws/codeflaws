#include<stdio.h>

int main(int argc, char *argv[])
{
    long long int m,n,i,j,a,b,cnt;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        cnt = 0;
        for(i=0; i<=m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(((i*i)+j)==n && (i+(j*j))==m)
                    cnt++;
            }
        }

        printf("%lld\n",cnt);
    }

    return (0);
}
