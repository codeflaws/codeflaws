#include <stdio.h>
#include <limits.h>
int visited[100005];
int arr[100005];
int main(int argc, char *argv[])
{
int i,n,k,s,j,idx;
int ans=INT_MAX;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++)
scanf("%d",&arr[i]);
for(i=1;i<=n;i++)
{
if(visited[i]==0)
{
s=0;
for(j=i;j<=n;j+=k)
{
s=s+arr[j];
visited[j]=1;
}
if(ans>s)
{
ans=s;
idx=i;
}
}
}
printf("%d\n",idx);
//system("pause");
return 0;
}
