#include"stdio.h"
long k,i,n,j,num[2000];
int main(int argc, char *argv[])
{
   //freopen("2.in","r",stdin);
   //freopen("2.out","w",stdout);
   scanf("%ld",&n);
   for(i=1;i<=n;i++)
      scanf("%ld",&num[i]);
   for(i=1;i<=n;i++)
      if(num[i]!=i)break;
   if(i<=n)
   {
      k=num[i]+i;
      for(j=i;j<=num[i];j++)
         if(num[j]!=k-j)break;
      if(j>num[i])
      {
         for(;j<=n;j++)
            if(num[j]!=n)break;
         if(j>n) printf("%ld %ld\n",i,num[i]);
            else printf("0 0\n");
      }
       else printf("0 0\n");
   }
   else printf("0 0\n");
   return 0;
}
