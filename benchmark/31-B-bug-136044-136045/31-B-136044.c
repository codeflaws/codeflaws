#include <math.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define eps 1e-8
#define oo 1000000000
#define pi 3.14159265359
#define zero(a) (abb(a)<=eps)
#define lowbit(a) ((a)&(-(a)))
#define abb(a) ((a)>0?(a):(-(a)))
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define cj(x1,y1,x2,y2) ((x1)*(y2)-(x2)*(y2))
#define dj(x1,y1,x2,y2) ((x1)*(y1)+(y1)*(y2))
#define dis(x1,y1,x2,y2) sqrt(((x2)-(x1))*((x2)-(x1))+((y2)-(y1))*((y2)-(y1)))

char str[505]={'\0'},ans[505]={'\0'};

int main(int argc, char *argv[])
{
   long i,l,flag=0,tot=0;
   gets(str+1);
   l=strlen(str+1);
   if (str[1]=='@'||str[l]=='@')
      goto end;
   for (i=1;i<=l-2;i++)
      if (str[i]=='@'&&(str[i+1]=='@'||str[i+2]=='@'))
         goto end;
   for (i=1;i<=l;i++)
   {
      if (flag&&str[i+1]=='@')
         ans[++tot]=',';
      if (str[i]=='@')
         flag=1;
      ans[++tot]=str[i];
   }
   if (flag)
      puts(ans+1);
   else
      printf("No solution\n");
   end:
   return 0;
}
