#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long *ans;
int *m;
/*
void pro(int b,int e)
{
    int i=0;
    for(;b+pow(2,i)<e;++i);
}*/

int main(int argc, char *argv[])
{
//    freopen("asdf1","r",stdin);
    int n,N,i,j;
    long long sum=0;
    scanf("%d",&n);
    m=(int *)malloc(sizeof(int));
    ans=(long long *)malloc(n*sizeof(long long));
    for(N=0;N<n;++N)
    {
        scanf("%d",&m[N]);
    }
    for(N=0;N<n-1;++N)
    {
        for(i=0;N+pow(2,i)<=n-1;++i);
        --i;
        printf("n=%d i=%d\n",N,i);
        sum+=m[N];
        m[N+(int)pow(2,i)]+=m[N];
        printf("%I64d\n",sum);
    }
    /*
    for(N=0;pow(2,N)<n;++N);
    --N;
    j=pow(2,N);
    ans[0]=m[0];
    m[j]+=m[0];
    for(i=1;i<j;++i)
    {
        ans[i]=ans[i-1]+m[i-1];
        m[j+i]+=m[i];
    }*/
    return 0;
}
