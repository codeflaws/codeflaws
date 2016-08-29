#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAX 100000
#define LL long long

int main(int argc, char *argv[])
{
   int n,m,q,i,arr[MAX],t;
   scanf("%d %d",&n,&m);//n is for zero, m for 1.
   if(m>=(n-1) && m<=(n+1)*2)
   {
       if(m==n || m==n-1)
       {
           for(i=0;i<m+n;i++)
           {
               if(i%2==0)
               {
                   printf("0");
               }
               else
               {
                   printf("1");
               }
           }
           exit(0);
       }
     
     
          
      
        if(m==2*(n+1))
        {
             t=n+1;
        }
        else
        {
             t=m%(n+1);
        }
        if(m==n+1)
        {
            printf("1");
        }
        else
        {
            printf("11");
        }
        t--;
        for(i=0;i<n;i++)
        {
            if(t>0)
            {
                printf("011");
            }
            else
            {
                printf("01");
            }
            t--;
        }
   }
   else
   {
       printf("-1");
   } 
   return 0;
}