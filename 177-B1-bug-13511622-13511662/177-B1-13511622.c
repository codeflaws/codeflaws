#include<stdio.h>
int main(int argc, char *argv[])
{
  int n,sum=0,i,k,j;
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0){
      k=i;
      sum+=n/k;
      k=n/k;
      while(k>1)
      {
        for(j=2;j<=k;j++)
        {
          if(k%j==0)
          {
            sum+=k/j;
            k=k/j;   
            break;
          }
      }
   //   if(f==1)
     
  }
   break;
  }
  }
  printf("%d",sum+n);
  return 0;
}