#include<math.h>
#include<time.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define oo 1000000000
#define pi 3.14159265359
#define zero(a) (abb(a)<=1e-7)
#define lowbit(a) ((a)&(-(a)))
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define abb(a) ((a)>0?(a):(-(a)))
#define cj(x1,y1,x2,y2) ((x1)*(y2)-(x2)*(y2))
#define dj(x1,y1,x2,y2) ((x1)*(y1)+(y1)*(y2))
#define dis(x1,y1,x2,y2) sqrt(((x2)-(x1))*((x2)-(x1))+((y2)-(y1))*((y2)-(y1)))

long f[10001]={0},hash[10001]={0},d[10001]={0},ans[101]={0},l[101]={0},r[101]={0};
long flag=0,tot=0;

long find(long x)
{
   long i;
   for (i=1;i<=tot;i++)
      if (d[i]==x)
         return i;
   d[++tot]=x;
   return tot;
}

long match(long now)
{
   long i,key;
   for (i=l[now];i<=r[i];i++)
   {
      key=find(i);
      if (hash[key]!=flag)
      {
         hash[key]=flag;
         if (!f[key]||match(f[key]))
         {
            f[key]=now;
            return 1;
         }
      }
   }
   return 0;
}

int main(int argc, char *argv[])
{
   long i,n;
   scanf("%ld",&n);
   for (i=1;i<=n;i++)
      scanf("%ld%ld",&l[i],&r[i]);
   for (i=1;i<=n;i++)
   {
      flag++;
      match(i);
   }
   for (i=1;i<=tot;i++)
      if (f[i])
         ans[f[i]]=d[i];
   for (i=1;i<=n;i++)
      printf("%ld\n",ans[i]);
   return 0;
}
