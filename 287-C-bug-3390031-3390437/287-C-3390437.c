#include<stdio.h>
int ans[100002];
int main(int argc, char *argv[])
{
    int i,N,l,r;
    scanf("%d",&N);
    if(!(N%4<=1)) {
        printf("-1\n");
        return 0;
    }
    l=2;r=N;
    for(i=1;i<=N/2;i+=2)
    {
        ans[i]=l;ans[i+1]=r;
        ans[N+1-i]=r-1;ans[N-i]=l-1;
        l+=2;r-=2;
    }
    if(N%2==1) ans[N/2+1]=N/2+1;
    for(i=1;i<=N;i++)
    (i==N)?printf("%d\n",ans[i]):printf("%d ",ans[i]);
    return 0;
}
