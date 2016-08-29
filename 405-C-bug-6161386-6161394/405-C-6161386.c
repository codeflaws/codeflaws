#include <stdio.h>
#define maxn 1005
int mp[maxn][maxn];
int main(int argc, char *argv[])
{
   int n;
   int i,j,k,q1,q2,res,m;
   while(~scanf("%d",&n))
   {
      for(i=1;i<=n;i++)
       for(j=1;j<=n;j++) scanf("%d",&mp[i][j]);
      res=0;
      for(i=1;i<=n;i++)
      {
        for(j=1;j<=n;j++)
         if(mp[i][j]&mp[j][i]) res=1-res;
      }
      scanf("%d",&m);
      for(i=1;i<=m;i++)
      {
       scanf("%d",&q1);
       if(q1==3)
         printf("%d",res);
       else
       {
        scanf("%d",&q2);
        res=1-res;
       }
       printf("\n");
      }
   }
return 0;
}
