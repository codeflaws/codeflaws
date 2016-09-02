#include<stdio.h>
int main(int argc, char *argv[])
{
  int n,i,k,k1,x,m,m1;
  scanf("%d %d",&n,&x);
  int a[n],b[n];
  for(i=0;i<n;i++)
  {
    scanf("%d %d",&k,&k1);
    if(k>k1)
    {
      a[i]=k1;
      b[i]=k;
    }
    else
    {
      a[i]=k;
      b[i]=k1;
    }
  }
  m=a[0];
  m1=b[0];
  for(i=0;i<n;i++)
  {
    if(m<a[i])
      m=a[i];
    if(m1<b[i])
      m1=b[i];
  }
  if(m>m1)
    printf("-1");
  else if(x>=m&&x<=m1)
    printf("0");
  else
  {
      if(m>x)
        m=m-x;
      else
        m=x-m;
    if(m1>x)
      m1=m1-x;
    else
      m1=x-m1;
      if(m<m1)
        printf("%d",m);
      else
        printf("%d",m1);
  }
  return 0;
}