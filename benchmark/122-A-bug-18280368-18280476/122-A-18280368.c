#include<stdio.h>
int main(int argc, char *argv[])
   {
       long long int a,b,n ,counter=5;
       scanf("%lld" , &n);

        if(n<4)
        {
            printf("NO\n");
        }
       else if(n%7==0 || n%4==0)
       {
           printf("YES\n");
       }
       else
       {
           while(n>7)
           {
               a = n%10;
               b = n/10;
               if(a!=4 &&  a!=7)
               {
                   counter=0;
                   break;
               }
               else
               {
                   n =b;
                   b=0;
                   a=0;
                   if(n<10)
                   {
                       if(n!=4 && n!=7)
                       {
                           counter=0;
                           break;

                       }
                   }

               }
           }
           if(counter==0)
           {
               printf("NO\n");
           }
           else
           {
               printf("YES\n");
           }
       }
       return 0;
         }
