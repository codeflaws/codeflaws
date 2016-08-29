#include<math.h>
#include<time.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define oo 2100000000
#define pi 3.14159265359
#define zero(a) (abb(a)<=1e-7)
#define lowbit(a) ((a)&(-(a)))
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define abb(a) ((a)>0?(a):(-(a)))
#define cj(x1,y1,x2,y2) ((x1)*(y2)-(x2)*(y2))
#define dj(x1,y1,x2,y2) ((x1)*(y1)+(y1)*(y2))
#define dis(x1,y1,x2,y2) sqrt(((x2)-(x1))*((x2)-(x1))+((y2)-(y1))*((y2)-(y1)))

long a[100002]={0},f[100002]={0};

int main(int argc, char *argv[])
{
   long i,n,s=0,sum=0,ans=0;
   scanf("%ld",&n);
   for (i=1;i<=n;i++)
   {
      scanf("%ld",&a[i]);
      sum+=a[i];
   }
   for (i=n;i>=1;i--)
      f[i]=f[i+1]-a[i];
   for (i=n-1;i>=1;i--)
      f[i]=max(f[i],f[i+1]);
   for (i=1;i<=n+1;i++)
   {
      ans=max(ans,s+f[i]);
      s-=a[i];
   }
   printf("%ld\n",sum+2*ans);
   return 0;
}
