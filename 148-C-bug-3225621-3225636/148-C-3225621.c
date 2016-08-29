//In the name of God
#include <stdio.h>

int main(int argc, char *argv[])
{
  int n,a,b;
  scanf("%d%d%d",&n,&a,&b);
  int i;
  int last=0;
  if(b==0 && a+1==n)
    {printf("-1\n"); return 0;}
  for(i=1;i<=n;++i)
    {
      if(i==1)
	{
	  printf("1 ");
	  last=1;
	}
      else if(b!=0)
	{
	  last*=2;
	  printf("%d ",last);
	  b--;
	}
      else if(a!=0)
	{
	  if(i==2)
	    {
	      printf("%d ",last);
	    }
	  else
	    {
	  last++;
	  printf("%d ",last);
	  a--;
	    }
	}
      else
	printf("%d ",last);
    }
  printf("\n");
  return 0;
}
