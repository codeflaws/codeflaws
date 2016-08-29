#include<stdio.h>
int main(int argc, char *argv[])
{
 int n,m,a[56],b[56],c1=0,max,c[59],r=0,k,j,i,l;
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
scanf("%d",&m);
for(i=0;i<m;i++)
  scanf("%d",&b[i]);
r=0;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if((b[j]%a[i])==0)
{
c[r]=(b[j]/a[i]);
r++;
}
}
}
l=r;
max=c[0];
for(i=0;i<l;i++)
{
if(c[i]>max)
max=c[i];
}
for(i=0;i<l;i++)
{
if(c[i]==max)
c1=c1+1;
}
printf("%d",c1);
return 0;
}

