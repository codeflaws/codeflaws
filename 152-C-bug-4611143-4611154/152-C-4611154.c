#include<stdio.h>
 int n,m,f[205][205],ct[205]={0},i,j;
 char c[105][105];
 long long int ans=1;
int main(int argc, char *argv[])
{
    for(i=0;i<205;i++)
        for(j=0;j<205;j++)
        f[i][j]=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%s",c[i]);
    for(j=0;j<m;j++)
        for(i=0;i<n;i++)
    {
        if(f[j][c[i][j]-'0']==0)
            {
                ct[j]++;
                f[j][c[i][j]-'0']++;
            }
            else
                f[j][c[i][j]-'0']++;
    }
    for(j=0;j<m;j++)
    {
        ans=(ans*ct[j])%(1000000007);
    }
    printf("%I64d\n",ans);
    return 0;
}