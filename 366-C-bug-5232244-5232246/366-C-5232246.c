#include <stdio.h>
#define MAXN 100*100*10
#define max(a,b) (a > b) ? a : b;
int a[101],b[101],f[101][2*MAXN+1];
int main(int argc, char *argv[])
{
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for (i=1;i<=n;i++)
        scanf("%d",&b[i]);
    for (i=1;i<=n;i++)
        for (j=-MAXN;j<=MAXN;j++)
            f[i][j] = -MAXN;
    int t = a[1] - k * b[1] + MAXN;
    f[1][MAXN] = 0;
    f[1][t] = a[1];
    for (i=2;i<=n;i++)
        for (j=-MAXN;j<=MAXN;j++)
        {
            t = j + k * b[i] - a[i] + MAXN;
            if (t >=0 && t <= 2*MAXN)
            {
                f[i][j+MAXN] = max(f[i-1][j+MAXN],f[i-1][t]+a[i]);
            }else
            {
                f[i][j+MAXN] = f[i-1][j+MAXN];
            }
        }
    int max = 0;
    for (i=1;i<=n;i++)
        if (f[i][MAXN] > max)
            max = f[i][MAXN];
    if (max == 0) printf("-1"); else
        printf("%d",max);
    return 0;
}
