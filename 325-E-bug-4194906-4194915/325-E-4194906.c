#include<stdio.h>
#include<stdlib.h>
#define MAX 100005
int n,ans[MAX],visit[MAX];
int main(int argc, char *argv[])
{
    int i,j;
    scanf("%d",&n);
    if(n%1)
    {
        printf("-1\n");
        return 0;
    }
    memset(visit,0,sizeof(int)*(n+1));
    ans[n]=0;
    for(i=n;i>0;i--)
    {
        visit[ans[i]]=1;
        ans[i-1]=ans[i]>>1;
        if(!visit[ans[i]^1])
            ans[i-1]+=n>>1;
    }
    for(i=0;i<=n;i++)
    {
        if(i)
            printf(" ");
        printf("%d",ans[i]);
    }
    printf("\n");
    return 0;
}
