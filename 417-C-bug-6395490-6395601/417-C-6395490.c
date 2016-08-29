#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
 int n,k,i,j,l,match,flag=0;
 i=-1;
 float ratio;
 scanf("%d%d",&n,&k);
 ratio=(float)n/2;
 if((k>ratio) || (n==2))
  printf("%d\n",i);
 else
 {
  match=n*k;
  printf("%d\n",match);
  for(i=1;i<=n;i++)
  {
   for(j=i+1;j<=i+k;j++)
    {
     if(j>n)
     {
      l=j-n;
     }  
     else
      l=j;
     printf("%d %d\n",i,l);
    } 
  }
 } 

 return 0;
}
