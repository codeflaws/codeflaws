#include<stdio.h>
int a[100005];
int b[105][105];
int n,i,j,k,x,ans,m;
int main(int argc, char *argv[])
{
int hi ;
ans = 40000000;
int n;
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
int x,y;
for(i=0;i<m;i++)
{
scanf("%d%d",&x,&y);
b[x][y] = 1;
}
hi = ans;

for(i=1;i<=n;i++)
for(j=i+1;j<=n;j++)
for(k=j+1;k<=n;k++)
{
if(b[i][j] && b[j][k] && b[k][i]){
x = a[i] + a[j] + a[k];
if(x<ans)ans = x;}
}
if(ans==hi)ans = -1;
printf("%d\n",ans);


return 0;
}