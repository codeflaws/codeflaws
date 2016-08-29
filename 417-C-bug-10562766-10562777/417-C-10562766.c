#include<stdio.h>

int main(int argc, char *argv[])
{
  int n,k,i,j,counter=1,p;
  scanf("%d%d",&n,&k);
  if(n*k > n*(n-1)/2)
    {
      printf("-1\n");
      return 0;
    }
  else
    {
      printf("n is:%d k is:%d\n",n,k);
      printf("%d\n",n*k);
      for(i=1;i<=n;i++)
	{
	  counter=1;
	  for(j=(i+1)%n;counter<=k;j++)
	    {
	      // printf("j is:%d\n",j);
	      counter++;
	      if(j == 0 || j == n)
		{
		  printf("%d %d\n",i,n);
		}
	      else 
		printf("%d %d\n",i,j%n);
	    }
	 
	}
    }
  return 0;
}
