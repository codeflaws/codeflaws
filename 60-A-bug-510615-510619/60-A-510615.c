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

char a[111],b[111],c[111],d[111];

int main(int argc, char *argv[])
{
   int m,t,x=1,y;
   scanf("%d%d",&y,&m);
   while (m--)
   {
      scanf("%s%s%s%s%d",a+1,b+1,c+1,d+1,&t);
      if (c[1]=='l')
         y=min(y,t-1);
      else
         x=max(x,t+1);
      printf("%d\n",(y>=x)?y-x+1:-1);
   }
   return 0;
}
