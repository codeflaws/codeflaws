#include <stdio.h>
int main(int argc, char *argv[])
{
   int x,n,m,k,i,j,q;
   while(~scanf("%d%d%d",&n,&m,&k))
   {
      for(i=1;i<=n;i++)
	   for(j=1;j<=m;j++)
		 scanf("%d",&x);
	  printf("%d\n",m*(m-1)/2);
	  if(k==0)
	  {
	   j=1;
	   q=m;
       for(i=1;i<=m*(m-1)/2;i++)
	   {
	     if(j<=q-1)
	      printf("%d %d\n",j,j+1);
		 else 
		 {
		  q--;
		  j=1;
		  printf("%d %d\n",j,j+1);
		 }
		 j++;
	   }
	  }
	  else 
	  {
	   j=m;
	   q=1;
	   for(i=1;i<=m*(m-1)/2;i++)
	   {
	     if(j>=q+1) printf("%d %d\n",j,j-1);
		 else 
		 {
		   q++;
		   j=m;
		   printf("%d %d\n",j,j-1);
		 }
		 j--;
	   }
	  }
   }
return 0;
}
