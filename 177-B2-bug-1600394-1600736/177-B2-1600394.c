#include <stdio.h>
#include <string.h>
int A[35010],D[4000];
int main(int argc, char *argv[])
{
    long long i,j,n,sum,sign;
    scanf("%lld",&n);
    sum=0;sign=0;
    memset(A,0,sizeof(A));
    for(i=2;i<=35000;i++)
    {
        if(A[i]==0)
        {
            D[sign]=i;sign++;
            for(j=2*i;j<=35000;j+=i)
            {
                A[j]=1;
            }
        }
    }
    sum+=n;
    for(i=0;n>1;)
    {
        if(n%D[i]==0) {sum+=n/D[i];n/=D[i];}
        else
        {
            i++;
        }
    }
    printf("%lld",sum);
    return 0;
}


