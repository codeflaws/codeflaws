#include <stdio.h>

long hash[2005]={0};

int main(int argc, char *argv[])
{
 long x;
 long i;
 long flag=0;
 
 do
  {
   scanf("%ld",&x);
   hash[x]=1;
  }while(scanf(",")!=EOF);
 
 for(i=1;i<=1001;i++)
   if(hash[i-1]==0&&hash[i]==1)
    {
     if(flag)
      printf(",");
     if(hash[i+1]==0)
      {
       printf("%ld",i);
       flag=1;
       continue;
      }
     printf("%ld-",i);
     for(;hash[i];i++);
     printf("%ld",i-1);
     flag=1;
    }
 
 return 0;
}
