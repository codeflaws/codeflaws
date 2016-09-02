#include<stdio.h>
int main(int argc, char *argv[])
{
 int i,j,k,n,a[302],l=0;
 scanf("%d %d",&n,&k);
 for(i=0;i<(2*n+1);i++)
 scanf("%d",&a[i]);
 if(k==l)
 goto x;
 for(i=1;i<(2*n+1);i+2)
 {
  if((a[i]-1)>a[i-1] && (a[i]-1)>a[i+1])
 {a[i]=a[i]-1;
  l++;
  if(k==l)
 goto x;
 }}
   x:
   for(i=0;i<(2*n+1);i++)
 printf("%d ",a[i]);
 return(0);
 }
