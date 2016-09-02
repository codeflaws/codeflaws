#include <stdio.h>
#include <stdlib.h>
char tap[11][11][11];
int visited[11][11][11];
int n,m,k,ans=0;
void dfs(int a,int b, int d)
{
    ans++;
    if(a+1<=k && tap[a+1][b][d]=='.'&& !visited[a+1][b][d]) {visited[a+1][b][d]=1;dfs(a+1,b,d);}
    if(b+1<=n && tap[a][b+1][d]=='.'&& !visited[a][b+1][d]) {visited[a][b+1][d]=1;dfs(a,b+1,d);}
    if(d+1<=m && tap[a][b][d+1]=='.'&& !visited[a][b][d+1]) {visited[a][b][d+1]=1;dfs(a,b,d+1);}
    if(a-1>=1 && tap[a-1][b][d]=='.'&& !visited[a-1][b][d]) {visited[a-1][b][d]=1;dfs(a-1,b,d);}
    if(b-1>=1 && tap[a][b-1][d]=='.'&& !visited[a][b-1][d]) {visited[a][b-1][d]=1;dfs(a,b-1,d);}
    if(d-1>=1 && tap[a][b][d-1]=='.'&& !visited[a][b][d-1]) {visited[a][b][d-1]=1;dfs(a,b,d-1);}
}
int main(int argc, char *argv[])
{
    int i,j,l;
    char c;
    scanf("%d%d%d",&k,&n,&m);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(l=1;l<=m;l++)
            {
                scanf("%c",&c);
                while(c=='\n')
                {
                    scanf("%c",&c);
                }
                tap[i][j][l]=c;
            }
        }
    }
    int x,y;
    scanf("%d%d",&x,&y);
    visited[1][x][y]=1;
    if (tap[1][x][y]=='.')
    dfs(1,x,y);
    printf("%d",ans);
    return 0;
}
