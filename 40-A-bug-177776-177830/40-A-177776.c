#include <stdio.h>
#include <string.h>
#include <math.h>

#define oo 2000000000
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define abs(a) ((a)<0?-(a):(a))
#define eps 1e-8

int main(int argc, char *argv[])
{
 long x,y;
 long i;
 
 scanf("%ld%ld",&x,&y);
 
 if(x<0&&y<0)
  {
   x=-x;
   y=-y;
  }
 if(x==0||y==0)
  {
   printf("black\n");
   return 0;
  }
 
 for(i=1;i*i<x*x+y*y;i++);
 if(i*i==x*x+y*y)
  {
   printf("black\n");
   return 0;
  }
 if(i%2==0&&x*y>0)
  {
   printf("white\n");
   return 0;
  }
 else
  printf("black\n");
 
 return 0;
}
