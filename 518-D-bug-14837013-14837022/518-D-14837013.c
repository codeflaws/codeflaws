#include<stdio.h>
#include<math.h>
double d[2001][2001];
int main(int argc, char *argv[])
{
    int n,t,i,j;
    double p,f;
    scanf("%d%lf%d",&n,&p,&t);
    for(i=1;i<=t;++i)
        d[0][i]=0;
    for(i=0;i<=n;++i)
        d[i][0]=0;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=i;++j)
            d[i][j]=(d[i-1][j-1]+1)*p+(1-p)*d[i][j-1];
    }
    printf("%lf",d[n][t]);
    return 0;
}
