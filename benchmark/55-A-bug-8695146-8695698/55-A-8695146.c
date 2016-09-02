#include <stdio.h>
int main(int argc, char *argv[])
{
  int n,i,j,state=1;
  scanf("%d",&n);
  int circle[n];
  int flea=1;
  for(i=0;i<n;i++)
    circle[i]=0;
  circle[0]=1;
  for(i=1;i<=n;i++)
    {
      flea=flea+i;
      if(flea%n==0)
	flea=n;
      else
	flea=((flea+i)%n);
      circle[flea-1]=1;
    }

  for(j=0;j<n;j++)
    {
      if(circle[j]!=1)
	{
	  state=0;
	  break;
	}
    }
  
  if(state==1)
    puts("YES");
  else if(state==0)
    puts("NO");
  return 0;
}
