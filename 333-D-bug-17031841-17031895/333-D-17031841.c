#include <stdio.h>
int n,m;
int map[1010][1010];
int mn = 1000000000,mx = -1;
short flag[1010][1010];
short check(int lim)
{
    int i,j,k,cnt,tmp[1010];
    memset(flag,0,sizeof(flag));
    for(i=1;i<=n;i++)
    {
        cnt = 0;
        for(j=1;j<=m;j++) if(map[i][j]>=lim) tmp[++cnt] = j;
        for(j=1;j<=cnt;j++) for(k=j+1;k<=cnt;k++)
        {
            if(!flag[j][k]) flag[j][k] = 1;
            else return 1;
        }
    }
    return 0;
}
int work()
{
    int head = mn,tail = mx,mid;
    while(head<tail)
    {
        mid = (head+tail+1)>>1;
        if(check(mid)) head = mid;
        else tail = mid-1;
    }
    return head;
}
int main(int argc, char *argv[])
{
    int i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++) for(j=1;j<=m;j++)
    {
        scanf("%d",&map[i][j]);
        mn = mn<map[i][j]?mn:map[i][j];
        mx = mx>map[i][j]?mx:map[i][j];
    }
    printf("%d",work());
    return 0;
}