#include <stdio.h>
int main(int argc, char *argv[])
{
    int i, j, n, m, tt[1001], cc[1001], l, r, t, c, flag[1001]={0};
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++)
        tt[i]=1000, cc[i]=1000;
    for(i=0; i<m; i++)
    {
        scanf("%d %d %d %d", &l, &r, &t, &c);
        for(j=l; j<=r; j++)
        {
            if(t<tt[j])
            {
                flag[j]=1;
                tt[j]=t;
                cc[j]=c;
            }
        }
    }
    int ans=0;
    for(i=1; i<=n; i++)
        if(flag[i])
            ans+=cc[i];
    printf("%d\n", ans);
    return 0;
}