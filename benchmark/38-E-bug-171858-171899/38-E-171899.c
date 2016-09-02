#include<math.h>
#include<time.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define oo 1000000000000000000LL
#define pi 3.14159265359
#define zero(a) (abb(a)<=1e-7)
#define lowbit(a) ((a)&(-(a)))
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define abb(a) ((a)>0?(a):(-(a)))
#define cj(x1,y1,x2,y2) ((x1)*(y2)-(x2)*(y2))
#define dj(x1,y1,x2,y2) ((x1)*(y1)+(y1)*(y2))
#define dis(x1,y1,x2,y2) sqrt(((x2)-(x1))*((x2)-(x1))+((y2)-(y1))*((y2)-(y1)))

struct case1
{
   long x,c;
}p[3001]={{0,0}};
long long f[3001]={0},s[3001]={0};

int main(int argc, char *argv[])
{
   long i,j,n;
   struct case1 t;
   scanf("%ld",&n);
   for (i=1;i<=n;i++)
      scanf("%ld%ld",&p[i].x,&p[i].c);
   for (i=1;i<n;i++)
      for (j=i+1;j<=n;j++)
         if (p[i].x>p[j].x)
         {
            t=p[i];
            p[i]=p[j];
            p[j]=t;
         }
   for (i=1;i<=n;i++)
   {
      s[i]=s[i-1]+p[i].x;
      f[i]=oo;
      for (j=i;j>=1;j--)
         f[i]=min(f[i],f[j-1]+p[j].c+s[i]-s[j-1]-(long long)p[j].x*(i-j+1));
   }
   printf("%I64d\n",f[n]);
   return 0;
}
