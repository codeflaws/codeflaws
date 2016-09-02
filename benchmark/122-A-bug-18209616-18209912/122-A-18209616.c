#include<stdio.h>
int main(int argc, char *argv[])
{
    int n;

        scanf("%d",&n);
       if(n%4==0 || n%7==0||n==4||n==7||n==47||n==744)
       {
           printf("YES\n");
       }
       else
       {
           printf("NO\n");
       }
   return 0;
}
