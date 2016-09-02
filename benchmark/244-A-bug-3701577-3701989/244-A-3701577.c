#include<stdio.h>
int main(int argc, char *argv[])
{
  int n,k,a[33],i,j,m=1,b[33],h=1;
  scanf("%d %d",&n,&k);
  for(i=1;i<=k;i++)
  scanf("%d",&a[i]);
  for(i=1;i<=n*k;i++)
  {for(j=1;j<=k;j++)
  {
      if(i==a[j]) break;
      else {if(j==k) {b[m]=i;m++;break;} else continue;}
  }}
  for(i=1;i<=k;i++)
  {printf("%d",a[i]);
  for(j=1;j<n;j++)
  {printf(" %d",b[h]);h++;}printf("\n");}
  return 0;
}
