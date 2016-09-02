#include <stdio.h>
int max(int a,int b);
int main(int argc, char *argv[])
{  int a,b,c,d,i,j,k,x1,y1,x2,y2;
   scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
   if(x1>x2 && y1>y2)
   {   printf("Vasiliy");

   }
   else if(x2==0 || y2==0)
   {
       if(x1+y1<=x2+y2)
       {
           printf("Polycarp");
       }
       else
       {
           printf("Vasiliy");
       }
   }

   else if(x2>x1 && y2>y1)
   {   if(x1+y1<=max(x2,y2))
       {
           printf("Polycarp");
       }
       else if(x1<x2 && y1<y2 )
       {printf("Polycarp");}
       else
       {
           printf("Vasiliy");
       }
   }
   else if(x1==x2)
   {
       if(y1<y2)
       {
           printf("Polycarp");
       }
       else if(x1+y1<=max(x2,y2))
       {
           printf("Polycarp");
       }
       else
       {
           printf("Vasiliy");
       }

   }
   else if(y1==y2)
   {
       if(x1<x2)
       {
           printf("Polycarp");
       }
       else if(x1+y1<=max(x2,y2))
       {
           printf("Polycarp");
       }
       else
       {
           printf("Vasiliy");
       }

   }
   else
   {
       if(x1+y1<=max(x2,y2))
       {
           printf("Polycarp");
       }
       else
       {
           printf("Vasiliy");
       }
   }
   return 0;

 }
 int max(int a,int b)
 {
     if(a>=b)
     {
         return a;
     }
     else
     {
         return b;
     }

 }