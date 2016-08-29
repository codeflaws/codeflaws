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

int main(int argc, char *argv[])
{
   int i,n,k,t;
   scanf("%d%d%d",&n,&k,&t);
   for (i=1;100*(i+1)<=n*k*t;i++);
   t=i;
   for (i=1;i<=n;i++)
   {
      printf("%d%c",min(t,k),(i==n)?'\n':' ');
      t-=min(t,k);
   }
   return 0;
}
