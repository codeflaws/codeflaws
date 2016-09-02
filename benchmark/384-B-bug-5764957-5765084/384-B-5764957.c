#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,k,a[1000][100],i,j;
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<n;i++)
      for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);
    printf("%d\n",m*(m-1)/2);
    for(i=1;i<=m;i++)
       for(j=1;j<=m;j++)
         if(k==0)printf("%d %d\n",i,j);
         else printf("%d %d\n",j,i);
    return 0;

}
