#include <stdio.h>
#define maxn 1005
int mp[maxn][maxn];
int main(int argc, char *argv[])
{
   int n,i,j,res,q,opera,x;
   //freopen("C:\\Users\\Shen\\Desktop\\input.txt","r",stdin);
   while(~scanf("%d",&n))
   {
       for(i=1;i<=n;i++)
        for(j=1;j<=n;j++) scanf("%d",&mp[i][j]);
       res=0;
       for(i=1;i<=n;i++)
       {
        for(j=1;j<=n;j++)
         if(mp[i][j]*mp[j][i]==1) res++;
       }
       printf("%d\n",res);
       res%=2;
       scanf("%d",&q);
       for(i=1;i<=q;i++)
       {
        scanf("%d",&opera);
        if(opera==3) printf("%d",res);
        else {scanf("%d",&x);res=1-res;}
       }
   }
   return 0;
}
