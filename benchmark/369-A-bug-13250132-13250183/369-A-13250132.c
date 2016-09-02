#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  int m,k,e,f,n,i,j,q,w;
   q=0;e=0;f=0;
   w=0;
  scanf("%d %d %d",&n,&m,&k);
  if((n>=1&&n<=1000)&&(m>=1&&m<=1000)&&(k>=1&&k<=1000))
  {
   int a[n];
   for(i=1;i<=n;i++)
   {
   scanf("%d",&a[i]);
   }
   for(j=1;j<=n;j++)
   {
    if(a[j]==1)
      q++;
   else if(a[j]==2)
    w++;
   }
   if(q>m)
    e=q-m;


   if(w>k&&q<m)
    f=w-k-(m-q);
   else if(w>k)
    f=w-k;
    if(w<k)

    if(f<0)
        f=0;
   printf("%d",f+e);
   return 0;
   }
   else
  return -1;

   }





