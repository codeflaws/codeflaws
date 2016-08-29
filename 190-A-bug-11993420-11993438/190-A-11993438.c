#include<stdio.h>
int main(int argc, char *argv[])
{
  long n=0,m=0,min=0,max=0;
  scanf("%ld",&n);
  scanf("%ld",&m);
  if(n==0&&m!=0)
   printf("Impossible");
  else
  {
     max=n+m-1;
     min=n+m-n;
    if(m==0)
       max=n;
    if(m<n)
     min=n;
    printf("%ld %ld",min,max);
  }
  return 0;
}
