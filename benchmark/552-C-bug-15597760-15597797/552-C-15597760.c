#include <stdio.h>
#include <stdlib.h>

long long mypow,mass;

long long check(long long mypow,long long mass)
{
   //printf("no aya ==%lld and mypow to wahi ==%lld\n",mass,mypow);
  long long x;
  if(mass==mypow)
  return 1;

  if(mass<mypow)
  {
      if((mypow-mass)==1)
      {//printf("here ***mypow-2\n");
      return 1;}
      else
      return -100;
  }

  x=mass%mypow;

  //printf("remainder==%lld\n\n",x);

  if(x==1 || x==0)
  {
      x=check(mypow,mass/mypow);
      return x;
  }

  if(x>1)
  {  //printf("remainder 2sse jyada to yaha par\n");
      x=mass/mypow;
      x++;
      long long y=x;
      x=x*mypow;
      x=x-mass;

      if(x==1 || x==0)
     {
      x=check(mypow,y);
      return x;
      }
      else
      return -100;
  }


}

int main(int argc, char *argv[])
{
   scanf("%lld %lld",&mypow,&mass);

    if(mass==1)
  {
      printf("YES\n");return 0;
  }

   long long x;
   x=check(mypow,mass);



    if(x==1)
    printf("YES\n");
    else
    printf("No\n");

    return 0;
}
