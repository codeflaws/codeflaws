#include<stdio.h>
#define N 102
int mat[N][N];
int main(int argc, char *argv[])
{
    int k,p,i,j,n=3;

    scanf("%d",&k);
    while((n+1)*n*(n-1)/6<=k) n++;
    k-=n*(n-1)*(n-2)/6;
    for(i=1;i<=n;i++) for(j=1;j<=n;j++) mat[i][j]=!(i==j);
    while(k>0)
    {
        n++;
        p=2;
        while((p+1)*p/2<=k) p++;
        k-=p*(p-1)/2;
        for(i=1;i<=p;i++) mat[i][n]=1;
    }
    printf("%d\n",n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++) printf("%d",mat[i][j]);
        puts("");
    }
    return 0;
}
