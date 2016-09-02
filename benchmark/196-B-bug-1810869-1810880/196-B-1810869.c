#include <stdio.h>

#define MAXN 1600
const int sx[4] = {0,-1,0,1};
const int sy[4] = {-1,0,1,0};

int ma[MAXN][MAXN];
int b[MAXN][MAXN];
struct{
    int x,y;
}from[MAXN][MAXN];
char s[MAXN];
int n,m;

int dfs(int x, int y)
{
    int px = (x % n + n) % n;
    int py = (y % m + m) % m;
    if (!ma[px][py]) return 0;
    if (b[px][py]) return (from[px][py].x!=x || from[px][py].y!=y);
    b[px][py] = 1;
    from[px][py].x = x;
    from[px][py].y = y;
    int i;
    for (i=0;i<4;i++)
        if (dfs(x+sx[i],y+sy[i])) return 1;
    return 0;
}

int main(int argc, char *argv[])
{
    int i,j,x,y;
    char c;
    
    scanf("%d %d",&n,&m);
    for (i=1;i<=n;i++)
    {
        scanf("%s",s+1);
        for (j=1;j<=m;j++)
        {
            c = s[j];
            if (c=='.') ma[i][j] = 1;
            else if (c=='S') ma[i][j]=1, x = i, y = j;
        }
    }
        
    printf(dfs(x,y)?"Yes\n":"No\n");
    return 0;
}
