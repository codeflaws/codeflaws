#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,m,a[52][52],i,j,ans=4;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    {
        scanf("%d",&a[i][j]);
        if(a[i][j]==1)
        {
            if(i==1||i==n&&j==1||j==m)
            ans=2;
        }
    }
    printf("%d\n",ans);
    return 0;
}
