#include <stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))

int main(int argc, char *argv[])
{
   int i,n,m,k,a,ans;
   scanf("%d%d%d",&n,&m,&k);
   if (!(n&1))
      printf("0\n");
   else
   {
      ans=min((long long)k/((n+1)/2)*m,1000000);
      for (i=1;i<=n;i++)
      {
         scanf("%d",&a);
         if (i&1)
            ans=min(ans,a);
      }
      printf("%d\n",ans);
   }   
   return 0;
}
