#include<stdio.h>

int main(int argc, char *argv[])
{
int n,k,i,c=0,l;
scanf("%d %d",&n,&k);
int a[500];
l=2*n+1;

for(i=1;i<=l;i++)
 {
  scanf("%d",&a[i]);
 }

for(i=2;i<=l;i=i+2)
{
  if(a[i]!=0)
   {
     a[i]=a[i]-1;
     c++;
    if(c==k)
     {
       break;
      }
   }
}

for(i=1;i<=l;i++)
 {
  printf("%d ",a[i]);
 }
 
return 0;
}