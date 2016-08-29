#include<stdio.h>
int main(int argc, char *argv[])
{
   int a,b,c,i,d,e,count=1,k=0;
   scanf("%d",&a);
   scanf("%d %d",&b,&c);
   for(i=1;i<a;i++)
   {
       scanf("%d %d",&d,&e);
       if(d==b && e==c)
       {
          count++;
          if(count>k)
          {
             k=count;
          }
       }
       else
       {
           b=d;
           c=e;
           count=1;
       }
   }
   printf("%d",k);
return 0;
}
