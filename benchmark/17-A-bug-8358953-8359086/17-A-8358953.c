#include <stdio.h>
int main(int argc, char *argv[])
{
 int n,k;
 scanf("%d%d",&n,&k);
 int i,j=0,l=0,count=0;
 int primes[1000];
 int prime=1;
 for(i=2;i<=1000;i++)
   {
     for(j=2;j<i;j++)
       {
	 if(i%j==0)
	   {
	     prime=0;
	     break;
	   }
       }
      if(prime==1)
       {
	 primes[l]=i;
	 l++;
       }
     prime=1;
   }

 for(i=0;primes[i]<=n;i++)
  {
     for(j=0;j<l;j++)
       {
	 if(primes[j]+primes[j+1]+1==primes[i])
	   count++;
	 if(primes[j]+primes[j+1]+1 > primes[i])
	   break;
       }
   }
 if(count==k)
   puts("YES");
 else
   puts("NO");
 return 0;
}
