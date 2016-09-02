#include <stdio.h>
#define MAXN 105
long n,l;
long d[MAXN]={0};
int main(int argc, char *argv[])
{
 long i,j,k,ans=0,max=0,sum=0;
 scanf("%ld%ld",&n,&l);
 for(i=1;i<=n;i++)
  {scanf("%ld",&d[i]);if(d[i]>max) max=d[i];}
 for(i=l;i<=max;i++)
  {
   sum=0;
   for(j=1;j<=n;j++) 
    sum+=(d[j]/i);
   if(sum*l>ans) ans=sum*l;
  }
 printf("%ld\n",ans);
 return(0);
}
