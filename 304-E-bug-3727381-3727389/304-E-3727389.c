#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a>b)?b:a)
#define UpFor(i,From,To) for(i=From;i<To;i++)
#define DownFor(i,From,To) for(i=From;i>To;i--)
#define LLg long long
int N,M,k,MAX=0;
int A[5001];
int hash[1000001],B[1000001];
void init();
void doit();
void DO(int);
int check(int);
int main(int argc, char *argv[])
{
    //freopen("CF_temp.in","r",stdin);
    init();
    doit();
    return 0;
}
void init()
{
    int i;
    scanf("%d%d",&N,&k);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&A[i]);
        MAX=max(MAX,A[i]);
    }
}
void doit()
{
    int i,j;
    UpFor(i,1,N+1)
    UpFor(j,1,i)
    hash[(int)fabs(A[i]-A[j])]++;
    UpFor(i,N-k,MAX+2)
    if(check(i))
    {
        printf("%d\n",i);
        return ;
    }
    printf("-1\n");
}
int check(int m)
{
    int i,tmp=m,times=0;
    while(tmp<=MAX)
    {
        times+=hash[tmp];
        tmp+=m;
    }
    if(times>(k+1)*k/2) return 0;
    times=0;
    UpFor(i,1,N+1)
    {
        tmp=A[i]%m;
        if(B[tmp]==m)times++;
        else B[tmp]=m;
        if(times>k) return 0;
    }
    return 1;
}
