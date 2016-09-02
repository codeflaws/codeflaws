#include <stdio.h>

int main(int argc, char *argv[])
{
  int a1,b1,a2,b2,a3,b3,cusa1,cusb1,cusa2,cusb2;
  scanf("%d %d",&a1,&b1);
  scanf("%d %d",&a2,&b2);
  scanf("%d %d",&a3,&b3);
  cusa1=a2+a3;
  cusb1=b2+b3;
  cusa2=a2+b3;
  cusb2=b2+a3;
  int f=0;
  if(cusa1<=a1)
  {
    if(b2<=b1 && b3<=b1 && f==0)
    {
      printf("YES");
      f=1;
    }  
  }
  if(cusa1<=b1 && f==0)
  {
    if(b2<=a1 && b3<=a1)
    {
      printf("YES");
      f=1;
    }
  }   
  if(cusb1<=a1 && f==0)
  {
    if(a2<=b1 && a3<=b1)
    {
      printf("YES");
      f=1;
    }
  }
  if(cusb1<=b1 && f==0)
  {
    if(a2<=a1 && a3<=a1)
    {
      printf("YES");
      f=1;
    }
  }
  if(cusa2<=a1 && f==0)
  {
    if(a3<=b1 && b2<=b1)
    {
      printf("YES");
      f=1;
    }
  }
  if(cusa2<=b1 && f==0)
  {
    if(a3<=a1 && b2<=a1)
    {
      printf("YES");
      f=1;
    }
  }
  if(cusb2<=a1 && f==0)
  {
    if(a2<=b1 && b3<=b1)
    {
      f=1;
      printf("YES");
    }
  }
  if(cusb2<=b1 && f==0)
  {
    if(a2<=a1 && b3<=a1)
    {
      f=1;
      printf("YES");
    }
  }
  else if(f==0)
  {
    printf("NO");
  }
  return 0;
}