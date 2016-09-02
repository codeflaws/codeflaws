#include <stdio.h>

int l[26]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101},prime[2000001];
char hash[20000001];
int k,a,b,ans=0;

void dfs(int now,int s,int f)
{
   if (l[now]==k)
      ans+=f*(b/s-(a-1)/s);
   else
   {
      dfs(now+1,s,f);
      if ((long long)s*l[now]<=b)
         dfs(now+1,s*l[now],-f);
   }
}

int main(int argc, char *argv[])
{
   int i,j,o=0;
   scanf("%d%d%d",&a,&b,&k);
   b/=k;
   a=(long long)(a+k-1)/k;
   for (i=2;i*i<=k&&k%i;i++);
   if (i*i>k)
      if (k<=100)
         dfs(0,1,1);
      else
      {
         ans+=(a==1&&b>=1);
         for (i=2;i<=b;i++)
         {
            if (!hash[i])
            {
               ans+=(i>=k&&a<=i);
               prime[++o]=i;
            }
            for (j=1;prime[j]*i<=b;j++)
            {
               hash[prime[j]*i]=1;
               ans+=(prime[j]>=k&&a<=i);
               if (i%prime[j]==0)
                  break;
            }
         }
      }
   printf("%d\n",ans);
   return 0;
}
