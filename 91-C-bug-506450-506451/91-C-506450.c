#include<math.h>
#include<time.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define oo 1000000000
#define mod 1000000009
#define pi 3.14159265359
#define zero(a) (abb(a)<=1e-7)
#define lowbit(a) ((a)&(-(a)))
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define abb(a) ((a)>0?(a):(-(a)))
#define cj(x1,y1,x2,y2) ((x1)*(y2)-(x2)*(y2))
#define dj(x1,y1,x2,y2) ((x1)*(y1)+(y1)*(y2))
#define dis(x1,y1,x2,y2) sqrt(((x2)-(x1))*((x2)-(x1))+((y2)-(y1))*((y2)-(y1)))

int f[100001];

int getf(int now)
{
   if (f[now]==now)
      return now;
   return f[now]=getf(f[now]);
}

int main(int argc, char *argv[])
{
   int i,n,m,a,b,t=1;
   scanf("%d%d",&n,&m);
   for (i=1;i<=n;i++)
      f[i]=i;
   for (i=1;i<=m;i++)
   {
      scanf("%d%d",&a,&b);
      if ((a=getf(a))==(b=getf(b)))
         f[a]=b;
      else
         t=t*2%mod;
      printf("%d\n",(t+mod-1)%mod);
   }
   return 0;
}
